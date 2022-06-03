#include<iostream>
#include<string>
using namespace std;
class MyClock{
    private:
        int hours,minutes,seconds;
    public:
        int used_hours;
        MyClock(int hours, int minutes, int seconds){
            this->hours=hours; this->minutes=minutes; this->seconds=seconds; 
        }
        MyClock(int minutes, int seconds){
            this->minutes=minutes; this->seconds=seconds; hours=22;
        }
        MyClock(int seconds){
            this->seconds=seconds; minutes=11; hours=10;
        }
        void currentTime(){
            used_hours=hours; bool past_half=0;
            if(hours==0){
                used_hours=12; 
            }
            if(hours>=12){
                used_hours=hours-12; past_half=1;
            }
            if(hours==12){
                used_hours=12;
            }
            string str_used_hours=to_string(used_hours),str_minutes=to_string(minutes),str_seconds=to_string(seconds);
            if(str_used_hours.length()==1){
                str_used_hours="0"+str_used_hours;
            }
            if(str_minutes.length()==1){
                str_minutes="0"+str_minutes;
            }
            if(str_seconds.length()==1){
                str_seconds="0"+str_seconds;
            }
            
            cout<<str_used_hours<<":"<<str_minutes<<":"<<str_seconds<<" ";
            if(past_half){
                cout<<"PM"<<endl;
            }
            else{
                cout<<"AM"<<endl;
            }
        }
        int operator<(MyClock x){
            int time1=3600*used_hours+60*minutes+seconds;
            int time2=3600*x.used_hours+60*x.minutes+x.seconds;
            return (time1<time2);
        }
        ~MyClock(){
            currentTime();
        }
};