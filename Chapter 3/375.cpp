#include <iostream>
using namespace std;

int main()
{
    long long wp,usp;
    cout << "Enter the world's population:";
    cin >> wp;
    cout << "Enter the population of the US:";
    cin >> usp;
    double rate = (double)usp/(double)wp;
    printf("The population of the US is %.5f percent of the world population",100*rate);
    return 0;
}
