/*
 This program counts the number of times a specific element is repeated in an array.
 */
#include <iostream>
using namespace std;

// function
int countOccurrence(const int arr[], int size, int target)
{
    // initialize the count of occurrences to zero
    int count = 0;
    // loop to traverse the array and count occurrences of the target element
    for (int i = 0; i < size; i++)
    {
        // check if the current element is equal to the target element
        if (arr[i] == target)
        {
            // update the count
            count++;
        }
    }
    return count;
}

int main()
{
    // array of integers
    int arr[] = {2, 3, 2, 4, 2, 5};
    ;
    // find the size of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    // The element to count repetitions for in the array
    int target = 2;
    // call the function to count the occurrence of the target element in the array
    int count = countOccurrence(arr, size, target);
    // display the count of the target element in the array
    cout << "The element " << target << " is repeated " << count << " times" << endl;
    return 0;
}
