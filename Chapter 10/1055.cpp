#include <iostream>
#include <cstring>
#include "stack.h"
using namespace std;

Stack::Stack() {
    top = 0;
}
 
bool Stack::isempty() const {
    return top == 0;
}
 
bool Stack::isfull() const {
    return top == MAX;
}
 
bool Stack::push(const Item& item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}
 
bool Stack::pop(Item& item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

int main()
{
    Stack st;
    customer cust;
    double sum_payment = 0;
    char ch;
    cout << "Select a (add), p (pop) or quit(q) :" << endl;
    while (cin >> ch && toupper(ch) != 'q') {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                if (st.isfull()) {
                    cout << "Stack already full!" << endl;
                    break;
                }
                char input[35];
                double payment;
                cout << "Enter this custormer name: ";
                if (!cin.get(input, 35)) {
                    cout << "Invalid customer name!" << endl;
                    cin.clear();
                    break;
                }
                strncpy(cust.fullname, input, 35);
                cust.fullname[35] = '\0';
                
                cout << "Enter " << cust.fullname << "'s payment: ";
                cin >> payment;
                cin.get();
                if (payment >= 0) {
                    cust.payment = payment;
                } else {
                    cout << "Invalid payment!" << endl;
                    break;
                }
                st.push(cust);
                break;
            case 'D':
            case 'd':
                if (st.isempty()) {
                    cout << "Already empty!" << endl;
                } else {
                    st.pop(cust);
                    cout << "Customer " << cust.fullname
                         << " poped, payment: " << cust.payment << endl;
                }
                break;       
        }
        cout << "Select a (add), p (pop) or quit(q) :\n";
    }
    return 0;
}

