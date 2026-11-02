#include <iostream>
using namespace std;

// Linear search function to find the index of a target element in an array
int linearSearch(const int arr[], int size, int target)
{
   for (int i=0; i<size; i++)
   {
    // compare the current element with the target
       if (arr[i] == target)
       {
           return i; // return the index of the found element
       }
   }
   return -1; // if the element is not found
}

int main()
{
    // array of integers
    const int arr[] = {13, 15, 21, 5, 6, 9, 99};
    // find the size of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    // call the function
    int target = 21;
    int result = linearSearch(arr, size, target);
    // print the result
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}