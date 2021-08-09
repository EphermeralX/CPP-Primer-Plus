#include <iostream>
using namespace std;

double add(double x, double y)
{
    return x + y;
}

double substract(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pf) (double x1, double x2))
{
    return pf(x,y);
}

int main(int argc, char const *argv[])
{
    double q = calculate(2.5, 10.4, add);
    cout << "The answer of add is " << q << endl;
    double t = calculate(2.5, 10.4, substract);
    cout << "The answer of substract is " << t << endl;
    return 0;
}
