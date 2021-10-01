#include <iostream>

const int Len = 40;
class golf
{
private:
    char fullname[Len];
    int handicap;
public:
    golf(/* args */);
    golf(const char* name, int hc);
    ~golf(){};
    void sethandicap(int hc);
    void showgolf() const;
};