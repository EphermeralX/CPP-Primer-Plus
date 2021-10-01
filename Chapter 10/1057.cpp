#include <iostream>
#include <cstring>
using namespace std;
class plorg {
    private:
        static const int LIMIT = 19;
        char _name[LIMIT];
        int CI;
    public:
        plorg(const char* name = "Plorga", int ci = 50);
        void setCI(int ci);
        void Show() const;
};


plorg::plorg(const char* name, int ci){
    if(*name == '\0') {
        std::cout << "Error name!";
        return;
    }
    strncpy(_name, name, LIMIT);
    _name[LIMIT] = '\0';
    CI = ci;
}
 
void plorg::setCI(int ci) {
    CI = ci;
}
 
void plorg::Show() const {
    std::cout << "CI of " << _name << " is " << CI << std::endl;
}
 
int main() {
    plorg p1;
    p1.Show();
 
    plorg p2("plorg_2", 30);
    p2.Show();
 
    p1.setCI(20);
    std::cout << "After set CI 20, ";
    p1.Show();
}