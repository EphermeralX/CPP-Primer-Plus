#include <iostream>
using namespace std;
const int Seasons = 4;
const char *Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct cost
{
    double expenses[Seasons];
};

void fill(double *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(double *pa)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

void fill(struct cost *pCost)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pCost->expenses[i];
    }
}

void show(struct cost *pCost)
{
    double total = 0.0;
    cout << "\nEXPENSE\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pCost->expenses[i] << endl;
        total += pCost->expenses[i];
    }
    cout << "Total Expense: $" << total << endl;
}
int main()
{
    // Situation A
    cout << "Situation a: " << endl;
    double pa[Seasons] = { 0 };
    fill(pa);
    show(pa);
 
    // Situation B
    cout << endl << endl;
    cout << "Situation b: " << endl;
    struct cost *pCost = new struct cost;
    fill(pCost);
    show(pCost);
    delete pCost;
}