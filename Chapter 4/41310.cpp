#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<double,3> record;
    double average;
    cout << "Enter the first record: ";
    cin >> record[0];
    cout << "Enter the second record: ";
    cin >> record[1];
    cout << "Enter the third record: ";
    cin >> record[2];
    average = (record[0] + record[1] + record[2])/3;
    cout << "Your average record is: " << average;
    return 0;
}
