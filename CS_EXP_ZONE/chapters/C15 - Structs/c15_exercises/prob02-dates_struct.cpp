#include<iostream>
#include<string>
using namespace std;
struct date {
    int d,m,y;
    date(int d, int m, int y) {
        if(y>=0){
            if((d>=1 && d<=31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)) 
            || (d>=1 && d<=30 && (m==4 || m==6 || m==9 || m==11)
            || (d>=1 && d<=28 && m==2 && y%4!=0) || (d>=1 && d==29 && m==2 && y%4==0))){
                this->d=d; this->m=m; this->y=y;
            }
        }
        else{
            cout<<"invalid date";
        }
    }
    void print() {
        string date=to_string(d),month=to_string(m),year=to_string(y);
        if(d<10){
            date = "0"+date;
        }
        if(m<10){
            month="0"+month;
        }
        while(year.length()<4){
            year="0"+year;
        }
        cout<<date<<" "<<month<<" "<<year<<endl;
    }
};