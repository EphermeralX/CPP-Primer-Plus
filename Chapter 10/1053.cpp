#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

int main()
{

    return 0;
}

golf::golf(const char* name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

golf::golf()
{
    char name[Len] = {'\0'};
    int hc;
    cout << "Please enter the name: ";
    cin.getline(name,Len);

    cout << "Please enter the handicap: ";
    while (!(cin >> hc))
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Please enter the golf's handicap: ";
    }
    cout << name << "::" << hc <<endl;
    strcpy(fullname, name);
    handicap = hc;
}

void golf::sethandicap(int hc)
{
    handicap = hc;
}

void golf::showgolf() const
{
    cout << "Name: " << fullname << ", Handicap is " << handicap << endl;
}