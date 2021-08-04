#include <iostream>
using namespace std;
const float GALLON_TO_LITER = 3.875;
const float HKM_TO_MILES = 62.14;
int main()
{
    float fuel_consume_eu,fuel_consume_us;
    cout << "Enter the fuel consume in europe(L/100KM):";
    cin >> fuel_consume_eu;
    fuel_consume_us = HKM_TO_MILES / (fuel_consume_eu / GALLON_TO_LITER);
    cout << "The fuel consume is "<<fuel_consume_eu<<"L/100KM"<<endl;
    cout << "The fuel consume is "<<fuel_consume_us<<" mpg(miles/gallon)."<<endl;
    return 0;
}
