#include <iostream>
using namespace std;
struct debts
{
    char name[50];
    double amount;
};

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] <<' ';
    cout << endl;    
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;    
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr[i]);
    }
 
    return sum;
}
int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mrE[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];
    double sum = 0.0;

    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mrE[i].amount;
    }
    cout << "Listing Mr.E 's counts of things:\n";
    ShowArray(things,6);
    cout << "Listing Mr.E 's debts:\n";
    ShowArray(pd,3);
    cout << "Sum of int array :" << SumArray(things,6) << endl;
    cout << "Sum of double array :" << SumArray(pd,3) << endl;
    return 0;
}
