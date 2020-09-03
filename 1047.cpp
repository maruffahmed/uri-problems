#include <iostream>
using namespace std;

int main()
{
    int start_hour, start_minute, end_hour, end_minute, hour, minute;
    cin >> start_hour >> start_minute >> end_hour >> end_minute;
    // Generating hour
    if(start_hour >= end_hour)
    {
        hour = (24 - start_hour) + end_hour;
    }else
    {
        hour = end_hour - start_hour;
    }
    // Generating minute
    if(start_minute >= end_minute)
    {
        minute = (60 - start_minute) + end_minute;
        if(minute >= 60)
        {
            minute = 0;
        }else{
            hour = 0;
        }
    }else
    {
        minute = end_minute - start_minute;
    }

    cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute <<" MINUTO(S)" << endl;

    return 0;
}
