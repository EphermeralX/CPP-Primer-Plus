#include <iostream>
using namespace std;
int main()
{
    double temp, sum = 0;
    do
    {
        cout << "Input a numberal to add: ";
        cin >> temp;
        sum += temp;
    } while (temp != 0);
    cout << "Input end\n";
    cout << "The sum is "<< sum;
    return 0;
}
