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
    Pizza *ptr_pizza = new Pizza;
    cout << "Enter the Pizza's information..." << endl;
    cout << "Pizza's company: ";
    cin.getline(ptr_pizza->company,40);
    cout << "Pizza's diameter(inches): ";
    cin >> ptr_pizza->diameter;
    cout << "Pizza's weight: ";
    cin >> ptr_pizza->weight;
    cout << "The dinner pizza's company is "<< ptr_pizza->company;
    cout << ". And the diameter(inches) is "<< ptr_pizza->diameter;
    cout << ". The weight is " << ptr_pizza->weight;
    return 0;
}
