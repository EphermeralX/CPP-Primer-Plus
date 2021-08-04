#include <iostream>
using namespace std;
const int DEGREE_TO_MINUTES = 60;
const int MINUTES_TO_SECONDS = 60;
int main()
{
    int d,m,s;
    cout << "Enter a latitude in degrees, minutes,and seconds"<<endl;
    cout << "First, enter the degrees:";
    cin >> d;
    cout << "Next, enter the minutes of arc:";
    cin >> m;
    cout << "Finally, enter the seconds of arc:";
    cin >> s;
    float degree = d + float(m)/DEGREE_TO_MINUTES + float(s)/(DEGREE_TO_MINUTES*MINUTES_TO_SECONDS);
    printf("%d degrees, %d minutes, %d seconds = %.4f degrees",d,m,s,degree);
    return 0;
}
