#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> previousSmaller(vector<int>& nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> res(n);

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && st.top()>=nums[i])
            st.pop();
        res[i] = st.empty()? -1 : st.top();
        st.push(nums[i]);

    }
    return res;
}

int main()
{

    vector<int> nums = {4,5,2,10,8};
    vector<int> result = previousSmaller(nums);
    for (int i=0; i<nums.size(); i++)
        cout<<result[i]<<" ";
    return 0;
}