#include <iostream>
#include <cctype>
#include "list.h"
using namespace std;

List::List() {
    first = 0;
}
 
bool List::isempty() const {
    return first  == 0;
}
 
bool List::isfull() const {
    return first == Max;
}
 
bool List::append(const Item& item) {
    if (first < Max) {
        items[first++] = item;
        return true;
    } else {
        return false;
    }
}
 
void List::visit (void (*pf) (Item&)) {
    for (int i=0; i<first; ++i) {
        pf(items[i]);
    }
}
 
void del_func(Item& item) {
    item -= 2;
}
 
void show_func(Item& item) {
    std::cout << item << " ";
}
 
int main() {
    List list;
    char ch;
    cout << "Please input A to add member or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
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
                if (list.isfull()) {
                    cout << "List already full!" << endl;
                    break;
                }
                Item item;
                cout << "Enter item: ";
                cin >> item;
                cin.get();
                list.append(item);
                break;      
        }
        cout << "Please input A to add custormer or Q to quit.\n";
    }
    cout << "show_func visit every list member: ";
    list.visit(show_func);
    cout << "\nAfter del_func visit every list member: ";
    list.visit(del_func);
    list.visit(show_func);
}