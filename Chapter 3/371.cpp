#include <iostream>
using namespace std;
const double FOOT_TO_INCH = 39.37;
const double FOOT_TO_FEET = 3.28;
int main()
{
    int height;
    cout << "Please input your height:";
    cin >> height; 
    cout << "Your height in inch is "<<height*FOOT_TO_INCH<<" inches\n";
    cout << "Your height in feet is "<<height*FOOT_TO_FEET<<" feets\n";
    return 0;
}
