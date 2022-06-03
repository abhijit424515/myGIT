#include<iostream>
#include<string>
using namespace std;

class super {
    protected:
        string processor="Intel Core i5-8250U", graphics = "NVIDIA GeForce MX150 2GB GDDR5", screen = "15.6 inch TN matte", resolution = "1920x1080"; 
        int ram = 8, hdd = 0, ssd = 256, weight = 4.9; 
    public:
        void show_processor(){
            cout<<"The laptop has "<<processor<<" processor"<<endl;
        }
        void show_graphics(){
            cout<<"The laptop has "<<graphics<<" graphics"<<endl;
        }
        void show_screen(){
            cout<<"The screen is "<<screen<<endl;
        }
        void show_resolution(){
            cout<<"The screen resolution is "<<resolution<<endl;
        }
        void show_ram(){
            cout<<"The laptop has "<<ram<<"GB RAM"<<endl;
        }
        void show_hdd(){
            if(hdd>0){
                cout<<"The laptop has a "<<hdd<<"TB HDD"<<endl;
            }
            else{
                cout<<"The laptop does not have a HDD"<<endl;
            }
        }
        void show_ssd(){
            if(ssd>0){
                cout<<"The laptop has a "<<ssd<<"GB SSD"<<endl;
            }
            else{
                cout<<"The laptop does not have a SSD"<<endl;
            }
        }
        void show_weight(){
            cout<<"The laptop weighs "<<weight<<"kgs"<<endl;
        }
};

class prodB: public super {
    public:
};

class prodA: public prodB {
    public:
        prodA(){
            processor = "AMD Ryzen 5-2500U"; graphics = "AMD Radeon Vega 8"; 
            hdd = 1; ssd = 0; weight = 5.07;
        }
};

class prodC: public prodB {
    public:

};

class prodD: public prodC {
    public:
        prodD(){
            processor = "Intel Core i5-7200U"; graphics = "NVIDIA GeForce 940MX 2GB GDDR5"; 
            screen = "17.3 inch IPS matte"; weight = 6.61;
        }
};

class prodE: public prodC {
    public:
        prodE(){
            weight = 5.27;
        }
};

int main(){
    prodA a1; prodB b1; prodC c1; prodD d1; prodE e1; 

        cout<<endl;
    a1.show_processor(); 
    a1.show_graphics(); 
    a1.show_screen(); 
    a1.show_resolution(); 
    a1.show_ram(); 
    a1.show_hdd(); 
    a1.show_ssd(); 
    a1.show_weight(); 
        cout<<endl;
    b1.show_processor(); 
    b1.show_graphics(); 
    b1.show_screen(); 
    b1.show_resolution(); 
    b1.show_ram(); 
    b1.show_hdd(); 
    b1.show_ssd(); 
    b1.show_weight(); 
        cout<<endl;
    c1.show_processor(); 
    c1.show_graphics(); 
    c1.show_screen(); 
    c1.show_resolution(); 
    c1.show_ram(); 
    c1.show_hdd(); 
    c1.show_ssd(); 
    c1.show_weight(); 
        cout<<endl;
    d1.show_processor(); 
    d1.show_graphics(); 
    d1.show_screen(); 
    d1.show_resolution(); 
    d1.show_ram(); 
    d1.show_hdd(); 
    d1.show_ssd(); 
    d1.show_weight(); 
        cout<<endl;
    e1.show_processor(); 
    e1.show_graphics(); 
    e1.show_screen(); 
    e1.show_resolution(); 
    e1.show_ram(); 
    e1.show_hdd(); 
    e1.show_ssd(); 
    e1.show_weight(); 
        cout<<endl;
}