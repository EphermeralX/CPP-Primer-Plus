#include <iostream>
using namespace std;

struct car
{
    string manufacturer;
    int date;
};

int main()
{
    int car_num;
    car *pcar;
    cout << "How many cars do you wish to catalog? ";
    cin >> car_num;
    cin.get();
    pcar = new car[car_num];
    for (int i = 0; i < car_num; i++)
    {
        cout << "Car #" << i+1 << ":" <<endl;
        cout << "Please enter the maker: ";
        getline(cin,pcar[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> pcar[i].date;
        cin.get();
    }
    cout << "Here is your collection:"<<endl;
    for (int i = 0; i < car_num; i++)
    {
        cout << pcar[i].date << " " << pcar[i].manufacturer <<endl;
    }
    
    return 0;
}
