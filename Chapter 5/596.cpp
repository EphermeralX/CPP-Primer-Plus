#include <iostream>
using namespace std;
int main()
{
    const string Month[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int sale_amount[3][12] = {};
    unsigned sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "Starting " << i+1 << " year's data."<<endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter the sale amount for "<< Month[j]<<" : ";
            cin >> sale_amount[i][j];
        }
    }
    cout << "Input Done !"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "Year "<< i+1 << " Month " << Month[j] << " SALE : " << sale_amount[i][j]<<endl;
            sum += sale_amount[i][j];
        }
        cout << "Total sale " << sum << " in " << i+1 <<" year!"<< endl;
    }
    return 0;
}