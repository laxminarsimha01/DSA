#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// Function to find the previous smaller element in an array
vector <int> previousGreater(vector<int>& nums)
{
    int n= nums.size();
    stack<int> st;
    vector<int> res(n);
    for (int i=0; i< n; i++)
    {
        while(!st.empty() && nums[i]>=st.top())
            st.pop();
        res[i] = st.empty() ? -1 : st.top();
        st.push(nums[i]);
    }
    return res;
}

int main()
{
    vector<int> nums = {4,5,2,10,8};
    vector<int> result = previousGreater(nums);
    for(int i=0; i<nums.size(); i++)
        cout<<result[i]<<" ";
    return 0;
}