#include <iostream>
using namespace std;
int main()
{
    string input;
 
    cout << "Enter a string (q to quit): ";
    getline(cin, input);
 
    while (input[0] != 'q')
    {
        for (size_t i = 0; i < input.length(); i++)
        {
            input[i] = toupper(input[i]);
        }
        cout << input << endl;
 
        cout << "Next string (q to quit): ";
        getline(cin, input);
    }
 
}