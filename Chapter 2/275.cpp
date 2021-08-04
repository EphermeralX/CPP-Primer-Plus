#include <iostream>
using namespace std;
int main()
{
    double C;
    cout << "Please enter a Celsius value:" << endl;
    cin >> C;
    double F = 1.8*C + 32.0;
    cout << C <<" degrees Celsius is "<<F<<" degrees Fahrenheit.";
    return 0;
}