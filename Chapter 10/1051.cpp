#include <iostream>
using namespace std;

class BankAccount
{
private:
    string fullname;
    string account;
    double deposit;
public:
    BankAccount(/* args */);
    BankAccount(const string, const string, float);
    ~BankAccount();
    void init_account(const string, const string, float);
    void print_info() const;
    void save(float);
    void withdraw(float);
};

BankAccount::BankAccount(/* args */)
{
    deposit = 0;
}

BankAccount::BankAccount(string name, string id, float f)
{
    fullname = name;
    account = id;
    deposit = f;
}


BankAccount::~BankAccount()
{
    cout << "All Done!" << endl;
}

void BankAccount::init_account(string name, string id, float f)
{
    cout << "Initialzing Account information..." << endl;
    if(name != "") fullname = name;
    if(id != "") account = id;
    deposit = f;
}

void BankAccount::print_info() const
{
    cout << "Account information:" << endl;
    cout << "Fullname :" << fullname << endl;
    cout << "Account ID:" << account << endl;
    cout << "Deposit :" << deposit << endl;
}

void BankAccount::save(float f)
{
    deposit += f;
}

void BankAccount::withdraw(float f)
{
    deposit -= f;
}

int main()
{
    BankAccount ba("Tony", "1119", 2200);
    ba.print_info();
    ba.init_account("Tony Cheng", "", 5000);
    ba.print_info();
    ba.save(111.9);
    ba.print_info();
    return 0;
}