#include <iostream>
using namespace std;

struct Pizza
{
    char company[40];
    float diameter;
    float weight;
};

int main()
{
    Pizza dinner;
    cout << "Enter the Pizza's information..." << endl;
    cout << "Pizza's company: ";
    cin.getline(dinner.company,40);
    cout << "Pizza's diameter(inches): ";
    cin >> dinner.diameter;
    cout << "Pizza's weight: ";
    cin >> dinner.weight;
    cout << "The dinner pizza's company is "<< dinner.company;
    cout << ". And the diameter(inches) is "<< dinner.diameter;
    cout << ". The weight is " << dinner.weight;
    return 0;
}