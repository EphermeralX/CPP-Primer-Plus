#include <iostream>
using namespace std;
const int DAY_TO_HOURS = 24;
const int HOURS_TO_MINUTES = 60;
const int MINUTES_TO_SECONDS = 60;

int main()
{
    long long seconds;
    cout << "Enter the number of seconds:";
    cin >> seconds;
    int days = seconds/(MINUTES_TO_SECONDS*HOURS_TO_MINUTES*DAY_TO_HOURS);
    int sec = seconds%(MINUTES_TO_SECONDS*HOURS_TO_MINUTES*DAY_TO_HOURS);

    int hour = sec/(HOURS_TO_MINUTES*MINUTES_TO_SECONDS);
    sec = sec%(HOURS_TO_MINUTES*MINUTES_TO_SECONDS);

    int minutes = sec/ MINUTES_TO_SECONDS;
    sec = sec % MINUTES_TO_SECONDS;
    
    printf("%lld seconds = %d days, %d hours, %d minutes, %d seconds",seconds,days,hour,minutes,sec);
    return 0;
}
