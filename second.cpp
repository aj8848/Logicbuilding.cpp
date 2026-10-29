#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    cout << "The second largest element is " << second_largest;
}