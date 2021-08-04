#include <iostream>
using namespace std;
int main()
{
    double years;
    cout << "Enter the number of light years:";
    cin >> years;
    double au = years*63240;
    cout << years <<" light years = " << au << " astronomical units.";
    return 0;
}
