/*
Count Even/Odd Elements
Count how many numbers in the array are even and how many are odd.
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
    cout << "Enter the elements of the array: " << endl;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    int evenCount = 0, oddCount = 0;
    for (int x: arr)
    {
        if (x%2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Count of even numbers: " << evenCount << endl;
    cout << "Count of odd numbers: " << oddCount << endl;
    return 0;
}