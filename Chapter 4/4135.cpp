#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct CandyBar
    {
        string brand;
        float weight;
        int calorie;
    }snack;
    snack = {
        "Mocha Munch",
        2.3,
        350
    }; 

    cout << "The CanyBar is "<< snack.brand << ", and the weight is "<<snack.weight<<", calorie is " << snack.calorie;
    return 0;
}
