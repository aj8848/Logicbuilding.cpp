/* This program shifts the elements of the array to the right by one position and sets the first element to 0. */
#include <iostream>
using namespace std;

int main()
{
    // array
    int arr[] = {5, 8, 2, 6};
    // find the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // loop through the array and shift elements to the right
    for (int i = size - 1; i > 0; i--)
    {
        // change the current element to the previous element
        arr[i] = arr[i - 1];
    }
    // handle the first element by setting it to 0
    arr[0] = 0;
    // print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}