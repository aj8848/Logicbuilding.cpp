#include<iostream>
using namespace std;
 void reverse (int num[], int size)
 {
    for (int i=0; i<size/2; i++)
    {
        int temp = num[i];
        num[i] = num [size -i-1];
        num[size-i-1] = temp;

    }


 }

int main ()
{
    int num[] = {2,5,6,8,12};
    int size = sizeof(num)/ sizeof(num[0]);
    reverse (num, size);
    for (int i=0; i< size; i++)
    {
        cout << num[i] <<" ";
    }
    return 0;

}