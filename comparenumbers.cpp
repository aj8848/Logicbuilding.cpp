#include <iostream>
using namespace std;
void compareNumber(int nums[], int n)
{
if (n <= 0)
{
    cout << "The array is empty!" << endl;
    return;
}

    int largestNumber = nums[0];
    int smallestNumber = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largestNumber)
        {
            largestNumber = nums[i];
        }

        if (nums[i] < smallestNumber)
        {

            smallestNumber = nums[i];
        }
    }
    std::cout << "Largest Number:"
              << largestNumber << endl;
    std::cout << "Smallest Number:"
              << smallestNumber << endl;
}

int main()
{
    int nums[] = {10, 5, 20, 8, 15};
    int n = 5;
    compareNumber(nums, n);
}