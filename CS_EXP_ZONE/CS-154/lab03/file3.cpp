#include<iostream>
#include<string>
using namespace std;

class super {
    protected:
        int price = 18999; string performance = "Snapdragon 695, 6GB RAM"; float display = 6.67; int rearCam = 108; int frontCam = 16; int battery = 5000; int storage = 64; 
    public:
        void show_performance(){
            cout<<"The device has "<<performance<<endl;
        }
        void show_display(){
            cout<<"The device display is of "<<display<<" inches"<<endl;
        }
        void show_rearCam(){
            cout<<"The rear camera is of "<<rearCam<<" MP"<<endl;
        }
        void show_frontCam(){
            cout<<"The front camera is of "<<frontCam<<" MP"<<endl;
        }
        void show_battery(){
            cout<<"The battery capacity is "<<battery<<" mAh"<<endl;
        }
        void show_storage(){
            cout<<"The storage capacity is "<<storage<<" GB"<<endl;
        }
        void show_price(){
            cout<<"The price of the device is Rs."<<price<<endl;
        }
};

class prodA: public super {
    public:
};

class prodB: public prodA {
    public:
        prodB(){
            rearCam = 64;
        }
};

class prodC: public prodA {
    public:
        prodC(){
            storage = 128; price = 20999;
        }
};

class prodD: public prodC {
    public:
        prodD(){
            performance = "MediaTek Helio G96, 6GB RAM"; price = 17999;
        }
};

int main(){
    prodA a1; prodB b1; prodC c1; prodD d1;

        cout<<endl;
    a1.show_performance(); 
    a1.show_display(); 
    a1.show_rearCam(); 
    a1.show_frontCam(); 
    a1.show_battery(); 
    a1.show_storage(); 
    a1.show_price();
        cout<<endl;
    b1.show_performance(); 
    b1.show_display(); 
    b1.show_rearCam(); 
    b1.show_frontCam(); 
    b1.show_battery(); 
    b1.show_storage(); 
    b1.show_price();
        cout<<endl;
    c1.show_performance(); 
    c1.show_display(); 
    c1.show_rearCam(); 
    c1.show_frontCam(); 
    c1.show_battery(); 
    c1.show_storage(); 
    c1.show_price();
        cout<<endl;
    d1.show_performance(); 
    d1.show_display(); 
    d1.show_rearCam(); 
    d1.show_frontCam(); 
    d1.show_battery(); 
    d1.show_storage(); 
    d1.show_price();
        cout<<endl;
}