#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
    {
        char brand[20];
        float weight;
        int calorie;
    };

int main()
{
    CandyBar *ptr = new CandyBar;
    strcpy(ptr[0].brand, "Mocha Munch");
    ptr[0].weight = 2.3;
    ptr[0].calorie = 350;
    strcpy(ptr[1].brand, "Hershey bar");
    ptr[1].weight = 4.2;
    ptr[1].calorie = 550;
    strcpy(ptr[2].brand, "Musketeers");
    ptr[2].weight = 2.6; // *(ptr+2)-> = 2.6
    ptr[2].calorie = 430;
    cout << "The 1st CanyBar is "<< ptr->brand << ", and the weight is "<< ptr->weight <<", calorie is " << ptr->calorie;
    cout << "The 2nd CanyBar is "<< (ptr+1)->brand << ", and the weight is "<< (ptr+1)->weight <<", calorie is " << (ptr+1)->calorie;
    cout << "The 3rd CanyBar is "<< (ptr+2)->brand << ", and the weight is "<< (ptr+2)->weight <<", calorie is " << (ptr+2)->calorie;
    return 0;
}