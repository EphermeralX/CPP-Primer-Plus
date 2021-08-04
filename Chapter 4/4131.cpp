#include <iostream>
using namespace std;
int main()
{
    char first_name[20], last_name[20];
    char grade;
    int age;
    cout << "What's your first name? ";
    cin.getline(first_name,20);
    cout << "What's your last name? ";
    cin.getline(last_name,20);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What's your age? ";
    cin >> age;
    cout << "Name:"<< last_name <<" "<< first_name << endl;
    cout << "Grade:"<< char(grade+1) << endl;
    cout << "Age:" << age << endl;
    return 0;
}
