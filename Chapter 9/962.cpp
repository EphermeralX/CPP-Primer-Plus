#include <iostream>
#include <cstring>
using namespace std;

void strcount(const std::string str){
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\"contains ";
    count = str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
int main()
{
    string input;
    char next;
    cout << "Enter a line:\n";
    getline(cin,input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin,input);
    }
    cout << "Bye\n";
    return 0;
}
