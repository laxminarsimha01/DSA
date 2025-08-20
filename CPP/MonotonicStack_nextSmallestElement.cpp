#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Function to find the next smallest element for each element in the array
vector<int> nextSmallest(vector<int>& nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> res(n);
    for (int i=n-1; i>=0; i--)
    {
        while (!st.empty() && st.top() >= nums[i])
            st.pop();
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(nums[i]);
    }
    return res;
}
int main()
{
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2};
    vector<int> res = nextSmallest(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}