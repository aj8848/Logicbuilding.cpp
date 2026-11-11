/*
 * This program finds and prints duplicate elements in an array.
 */
#include <iostream>
using namespace std;

int main ()
{
    //array of integers
const int arr[] = {1, 1, 2, 3, 3, 3, 5};
    //find the size
    int n = sizeof(arr) / sizeof(arr[0]);
    // loop through the array to find duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //compare the current element with the next elements
            if (arr[i] == arr[j])
            {
                //print the duplicate element
                cout << "Duplicate element: " << arr[i] << endl;
            }
        }
    }
    return 0;

}