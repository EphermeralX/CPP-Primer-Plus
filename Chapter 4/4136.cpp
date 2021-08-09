#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
    {
        string brand;
        float weight;
        int calorie;
    };

int main()
{
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}
    ,{"Hershey bar",4.2,550},{"Musketeers",2.4,430}};
    cout << "The 1st CanyBar is "<< snack[0].brand << ", and the weight is "<<snack[0].weight<<", calorie is " << snack[0].calorie;
    cout << "The 2nd CanyBar is "<< snack[1].brand << ", and the weight is "<<snack[1].weight<<", calorie is " << snack[1].calorie;
    cout << "The 3rd CanyBar is "<< snack[2].brand << ", and the weight is "<<snack[2].weight<<", calorie is " << snack[2].calorie;
    return 0;
}