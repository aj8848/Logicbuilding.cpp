/*This program will count the odd or even number with index from an array*/

#include <iostream>
using namespace std;

// function to find the even or odd
void evenOdd(const int num[], int size)
{
    // initialize from 0
    int odd = 0;
    int even = 0;
    // loop to traverse the array
    for (int i = 0; i < size; i++)
    {
        // condition to find the even number
        if (num[i] % 2 == 0)
        {
            // print the number with its index
            cout << "Even number " << num[i] << " at index " << i << endl;
            // update the even count
            even++;
        }
        else
        {
            // print the odd number with its index
            cout << "Odd number " << num[i] << " at index " << i << endl;
            odd++;
        }
    }
    // print the even odd count
    cout << "Odd count :" << odd << endl;
    cout << "Even count :" << even << endl;
}

int main()
{
    // array
    int num[] = {3, 6, 8, 11, 14, 17};
    // find the size
    int size = sizeof(num) / sizeof(num[0]);
    // call the function
    evenOdd(num, size);
    return 0;
}