#include <iostream>
#include <cstring>
using namespace std;

const char FINISHED[] = "done";
int main()
{
    int counter = 6;
    string words;
    cout << "Enter words (to stop, type the word 'done'): "<<endl;
    while (words != FINISHED)
    {
        counter++;
        cin >> words;
        cin.get();
    }
    cout << "You entered a total of "<< counter -1 << " words." << endl;
    return 0;
}