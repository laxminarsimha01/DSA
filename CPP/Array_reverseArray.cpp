/*
Reverse the Array (in-place)
Reverse and print the array without using extra space.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n), reverseArr;
    cout << "Enter the elements of the array: " << endl;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=(n-1); i>=0; i--)
        reverseArr.push_back(arr[i]);
    
    cout << "Original array: " << endl;
    for(int x: arr)
        cout << x << endl;
    
    cout << "Reversed array: " << endl;
    for(int x: reverseArr)
        cout << x << endl;
    

    // Alternatively, using std::reverse from the algorithm library
    reverse(arr.begin(), arr.end());
    cout << "Reversed array using reverse: " << endl;
    for(int x: arr)
        cout << x << endl;

}