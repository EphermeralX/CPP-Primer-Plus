#include <iostream>
#include "sales.h"
using namespace std;

Sales::Sales(const double ar[], int n)
{
    double sum = 0;
    if (n >= QUARTERS)
    {
        for (int i = 0; i < QUARTERS; i++)
            sales[i] = ar[i];
    }else{
        for (int i = 0; i < n; i++)
            sales[i] = ar[i];
        for (int i = n; i < QUARTERS; i++)
            sales[i] = 0;
    }
    max = min = sales[0];
    for (int i = 0; i < QUARTERS; i++)
    {
        sum += sales[i];
        if(min > sales[i]) min = sales[i];
        if(max < sales[i]) max = sales[i];
    }
    average = sum / QUARTERS;
}

Sales::Sales()
{
    int i = 0;
    double sum = 0;
    do
    {
        cout << "Enter a number: ";
        if (!(cin >> sales[i]))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "ERROE, Reenter a number: ";
            cin >> sales[i];
        }
        i++;
    } while (i < QUARTERS);
    max = min = sales[0];
    for (int i = 0; i < QUARTERS; i++)
    {
        sum += sales[i];
        if(min > sales[i]) min = sales[i];
        if(max < sales[i]) max = sales[i];
    }
    average = sum / QUARTERS;
}

void Sales::showSales() const
{
    cout << "This Sale's quarter list info: " << endl;
    for (int i = 0; i < QUARTERS; i++)
        cout << "No. "<< i+1 << ": sales: " << sales[i] << endl;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main()
{
    double de[QUARTERS] = {12,23,34,67};
    Sales s1(de,QUARTERS);
    Sales s2;
    s1.showSales();
    s2.showSales();
    return 0;
}