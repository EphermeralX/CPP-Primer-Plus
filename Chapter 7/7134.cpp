#include <iostream>
using namespace std;

long double probability(unsigned number, unsigned picks)
{
    long double result = 1.0;
    long double n = 0;
    unsigned p;
    for (n = number, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
 
    return result;
}
int main()
{
    unsigned field1 = 47;
    unsigned field2 = 27;
 
    cout << "You have on chance in ";
    cout << probability(47, 5) * probability(27, 1);
    cout << " of winning.\n" << endl;
}