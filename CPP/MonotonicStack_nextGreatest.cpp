#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to find the next greater element for each element in the array

vector<int> nextGreaterElements(vector<int>& nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> result(n);
    for (int i = n-1; i>=0; i--)
    {
        while (!st.empty() && st.top()<=nums[i])
            st.pop();
        if (st.empty())
            result[i] = -1;
        else
            result[i] = st.top();
        st.push(nums[i]);
    }
    return result;
}
int main()
{
    vector<int> nums = {3,1,4,1,5,9,2};
    vector<int> res = nextGreaterElements(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}