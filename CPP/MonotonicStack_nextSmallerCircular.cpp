#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// Function to find the next greatest element in a circular array

vector<int> nextSamllerCircular(vector<int>& nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> res(n);

    for (int i=2*n-1; i>=0; i--)
    {

        while(!st.empty() && st.top()>=nums[i%n])
            st.pop();
        if(i<n)
            res[i] = st.empty() ? -1 : st.top();
        st.push(nums[i % n]);
    }
    return res;

}
int main()
{
    vector<int> nums = {4, 3, 2, 1, 5};
    vector<int> res = nextSamllerCircular(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}