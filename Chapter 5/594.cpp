#include <iostream>
using namespace std;
const int depost = 100;
int main()
{
    float daphne = depost;
    float cleo = depost;
    int year = 0;
    while (daphne >= cleo)
    {
        cout << "In " << year++ <<" Year: Daphne = "<<daphne<<endl;
        cout << "\tCelo = " << cleo <<endl;
        daphne += 0.1 * depost;
        cleo += 0.05 * cleo;
    }
    cout << "In " << year <<" Year: Daphne = "<<daphne<<endl;
    cout << "\tCelo = " << cleo <<endl;
    cout << "Now Celo depost is higher than Daphne!";
    return 0;
}