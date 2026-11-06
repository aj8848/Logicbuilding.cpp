#include <iostream>
using namespace std;

int main()
{
    // Initialize an array
    int arr[] = {2, 2, 5, 4, 9};

    // Find the array size
    int size = sizeof(arr) / sizeof(arr[0]);

    // Assume the array is sorted
    bool sorted = true;

    // Check adjacent elements
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;

            cout << "First violating pair: "
                 << arr[i] << " and "
                 << arr[i + 1] << endl;

            break;
        }
    }

    // Print the result
    if (sorted)
    {
        cout << "Sorted: Yes." << endl;
    }
    else
    {
        cout << "Sorted: No." << endl;
    }

    // Print the array
    cout << "The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
