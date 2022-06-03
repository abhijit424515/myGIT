#include <iostream>
using namespace std;
class MyClock
{
    int hours, minutes, seconds;
    public:
        MyClock(int seconds)
        {
            hours=10;
            minutes=11;
            this->seconds=seconds;
        }
        MyClock(int minutes, int seconds)
        {
            hours=22;
            this->minutes=minutes;
            this->seconds=seconds;
        }
        MyClock(int hours, int minutes, int seconds)
        {
            this->hours=hours;
            this->minutes=minutes;
            this->seconds=seconds;
        }

        void currentTime()
        {
            int h1=hours%12;
            if(h1==0)
                h1=12;
            if(h1<10)
                cout << "0";
            cout << h1 << ":";

            if(minutes<10)
                cout << "0";
            cout << minutes << ":";

            if(seconds<10)
                cout << "0";
            cout << seconds;

            if(hours<12)
                cout << " AM" << endl;
            else
                cout << " PM" << endl; 

        }


        int operator<(MyClock &myClock1)
        {
            int h1=hours%12;
            int h2=myClock1.hours%12;
            if(h1 < h2 || (h1==h2 && minutes < myClock1.minutes) || (h1==h2 && minutes==myClock1.minutes && seconds < myClock1.seconds))
                return 1;
            return 0;
        }


        ~MyClock()
        {
            currentTime();
        }
};