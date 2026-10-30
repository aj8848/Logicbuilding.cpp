/*This program will find out the average from an array*/
#include <iostream>
using namespace std;

// function for finding the average of an array
double average(const int nums[], int size)
{
    if (size <= 0)
    {
        cout << "Is empty !" << endl;
        return 0.0;
    }
    // start sum with 0 and run a loop
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // update the sum
        sum += nums[i];
    }
    // convert the sum value to decimal to get exact value
    double avg = static_cast<double>(sum) / size;
    return avg ;
}

int main()

{
    // array
   const int nums[] = {4,8,12,16};
    // find the size
    int size = sizeof(nums) / sizeof(nums[0]);
    // call the function
     double result = average(nums, size);
     // print the size of an array
     cout <<"Size : "<< size << endl;
     // print the average
     cout <<"Average is " << result << endl;
    return 0;
}
