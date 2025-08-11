/*
Sum of N Numbers
Given an array of size N, compute the sum of all the elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int add(const vector<int>& arr)
{
    int sum = 0;
    for (int x: arr)
        sum+=x;
    return sum;
}

int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << "Sum of the array elements is: " << add(arr) << endl;
    
}