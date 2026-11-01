/*
 * This program counts the number of positive, negative, and zero elements in an array of integers.
 */
#include <iostream>
using namespace std;

int main()
{
    //ARRAY OF INTEGERS
    int num[] = {-5, 0, 9, -2, 4, 0};
    // FIND THE SIZE
    int size = sizeof(num) / sizeof(num[0]);
    // Start each counter at zero 
    int positivecount = 0;
    int negativecount = 0;
    int zerocount = 0;
    // LOOP
    for (int i = 0; i < size; i++)
    {
        if (num[i] > 0)
        {
            // Numbers greater than zero are positive.
            positivecount++;
        }
        else if (num[i] < 0)
        {
            // Numbers less than zero are negative.
            negativecount++;
        }
        else
        {
            // If it is neither positive nor negative, it must be zero.
            zerocount++;
        }
    }
    // Print totals 
    cout << "Total positive count: " << positivecount << endl;
    cout << "Total negative count: " << negativecount << endl;
    cout << "Total zero count: " << zerocount << endl;
    cout << endl;

    return 0;
}
