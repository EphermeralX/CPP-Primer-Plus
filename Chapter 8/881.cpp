#include <iostream>
using namespace std;

void fun(char *str, int print_times = 0)
{
    cout << "String: " << str << " , print_times: " << print_times << endl;
    if (print_times > 1)
    {
        print_times--;
        fun(str, print_times);
    }
    return;
}
int main()
{
    char str[128];
    int print_times = 0;
    cout << "Enter the string you want to print: ";
    cin.getline(str, 128);
    cout << "Enter the times you want to print: ";
    cin >> print_times;
 
    cout << "Test fun which has two prematers: " << endl;
    fun(str, print_times);
 
    cout << "Test fun which has one premater: " << endl;
    fun(str);

    return 0;
}
