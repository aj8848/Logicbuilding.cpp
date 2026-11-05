/*
 * This program moves all zeros in an array to the end while maintaining the relative order of non-zero elements.
 *Using the two-pointer technique.
 */
#include <iostream>
using namespace std;

int main()
{
    // array initialization with some zeros
    // we will move all zeros to the end of the array while maintaining the relative order of non-zero elements
    int arr[] = {0, 4, 5, 0, 12, 0, 6, 0, 0};
    // find the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // left marks the next position where a non-zero element should go.
    int left = 0;

    // iterate through the array with the right pointer
    for (int right = 0; right < n; right++)
    {
        if (arr[right] != 0)
        {
            if (right != left)
            {
                // swap the elements at left and right pointers
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
            left++;
            // move the left pointer to the next position to continue the process
        }
    }

    // print the array after moving zeros to the end
    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
