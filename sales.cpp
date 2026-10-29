/*this program will track the sales of the store*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int sales[5];
    int n = 5;
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << " enter the sales:" << endl;
        cin >> sales[i];
    }
    double highestsales = sales[0];
    double lowestsales = sales[0];
    ofstream file("sales.csv");
    if (!file)
    {
        cout << "Error in openning file" << endl;
        return 1;
    }
    file << "sale_amount\n";
    for (int i = 0; i < n; i++)
    {
        file << sales[i] << "\n";
    }

    file.close();

    for (int i = 0; i < n; i++)
    {
        total = total + sales[i];

        if (sales[i] > highestsales)
        {
            highestsales = sales[i];
        }
        if (sales[i] < lowestsales)
        {
            lowestsales = sales[i];
        }
    }
    double average = total / n;
    cout << "Total : " << total << endl;
    cout << "Average : " << average << endl;
    cout << "Highest sales : " << highestsales << endl;
    cout << "Lowest sales : " << lowestsales << endl;

    return 0;
}