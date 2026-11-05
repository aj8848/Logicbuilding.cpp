#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int left = i;
        int right = size - i - 1;
        if (arr[left] != 0 && left < right)
        {
            left++;
        }
        if (arr[right] == 0 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
