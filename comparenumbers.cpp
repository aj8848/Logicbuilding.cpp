/* This program will find the largest and smallest number in the array
 by comparing the elements of an array and help to develop the c++ logic
  how to find those largest and smallest numbers of any array by onepass */

#include <iostream>
using namespace std;

// Function to find the largest and smallest element in the array.....
void compareNumber(int nums[], int n)
{
    // check if the array is empty or not....
    if (n <= 0)
    {
        cout << "The array is empty!" << endl;
        return;
    }
    // start with the first element of the array
    int largestNumber = nums[0];
    int smallestNumber = nums[0];
    // loop to check the other elements
    for (int i = 1; i < n; i++)
    {
        // update the largestnumber by checking the elements in the array
        if (nums[i] > largestNumber)
        {
            largestNumber = nums[i];
        }
        // update the smallestnumber in the array by checking elements in the array
        if (nums[i] < smallestNumber)
        {

            smallestNumber = nums[i];
        }
    }
    // print the largest and smallest number
    cout << "Largest Number:"
         << largestNumber << endl;
    cout << "Smallest Number:"
         << smallestNumber << endl;
}

int main()
{

    // initilize the array
    int nums[] = {10, 5, 20, 8, 15};
    int n = 5;
    // call the function
    compareNumber(nums, n);
    return 0;
}