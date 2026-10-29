#include <iostream>
using namespace std;

void displaySUM( const int nums[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }

    cout << "Sum of element of an Array is " << sum;
}

int main()
{
   const int nums[] = {5, 10, 15, 20};
    int size = sizeof(nums) / sizeof(nums[0]);
    displaySUM(nums, size);
    return 0;
}
