#include <iostream>
using namespace std;

int main()
{
    int line;
    cout << "Enter the number od rows: ";
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - i -1; j++)
        {
            cout << ".";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}