#include <iostream>
#include <array>
const int size = 101;
using namespace std;

int main()
{
    array<long double, size> factorials;
    factorials[0] = factorials[1] =1;
    for(int i = 2; i < size ; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < size; i++)
        cout << i << "! = "<< factorials[i] <<endl;
    return 0;
}
