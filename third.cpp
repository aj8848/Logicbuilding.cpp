#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;


int main ()
{
    int arr[] = {9,5,9,3,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);;
    // sort the array  largest to smallest
    sort (arr, arr+size, greater<int>());



    int count =0;
    
    for(int i = 0; i<size; i++)
    {
        if (i==0 || arr[i] != arr[i-1])
        {
             count++;
             if (count == 3)
             {
                cout << "The third distinct element is: " << arr[i] << endl;
                return 0;
             }
        }

    }
   cout <<"Fewer than three distinct values" << endl;
   return 0;
}