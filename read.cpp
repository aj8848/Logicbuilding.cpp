/*This program  will read all the elements in an array*/

#include<iostream>
using namespace std;

//function for printing element of an array
void printArray (const int nums[], int size)
{
    for ( int i = 0; i < size; i++ )
    {
        // print the every elements in the array
        cout << nums[i] <<" ";
    }

}

int main ()
{
    // Array
   const int nums[] = {7,2,9,4};
    // find the size of an array
    int size = sizeof(nums)/sizeof(nums[0]);
    // call the function
    printArray(nums, size);
    return 0;
}