/*
Find the Maximum Element
Find and print the maximum value in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    int maxElemenr = arr[0];
    for (int x:arr)
    {
        if (x>maxElemenr)
            maxElemenr = x;
    }
    cout << "Maximum element in the array is: " << maxElemenr << endl;
    return 0;
}