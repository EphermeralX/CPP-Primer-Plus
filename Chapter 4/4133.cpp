#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first_name[20], last_name[20];
    char full_name[40];
    cout << "Enter your first name: ";
    cin.getline(first_name,20);
    cout << "Enter your last name: ";
    cin.getline(last_name,20);
    strcpy(full_name,last_name);
    strcat(full_name,", ");
    strcat(full_name,first_name);
    cout << "Here's the information in a single string: "<< full_name << endl;
    return 0;
}