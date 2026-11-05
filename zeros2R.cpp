/*This program moves all zeros to the end of the array*/
#include <iostream>
using namespace std;

int main()
{
    // array with zeros and non-zero elements
    int arr[] = {0, 1, 0, 0};
    // find the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // intialize two pointers, left and right
    int left = 0;
    int right = size - 1;
    // loop until the left pointer is less than the right pointer
    while (left < right)
    {
        // if the left pointer is not zero, move it to the right
        if (arr[left] != 0)
        {
            // move the left pointer to the right
            left++;
        }
        // if the right pointer is zero, move it to the left
        else if (arr[right] == 0)
        {
            // move the right pointer to the left
            right--;
        }

        // if the left pointer is zero and the right pointer is not zero, swap both the elements and move the pointers
        else
        {

            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    // print the array after moving zeros to the end
    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}