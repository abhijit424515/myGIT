#include<iostream>
using namespace std;

class super {
    protected:
        bool internet = 0, cable = 0, videoin = 0, audioin = 0, videoout = 0, audioout = 0;
    public:
        bool check_internet(){
            return internet;
        }
        bool check_cable(){
            return cable;
        }
        bool check_videoin(){
            return videoin;
        }
        bool check_audioin(){
            return audioin;
        }
        bool check_videoout(){
            return videoout;
        }
        bool check_audioout(){
            return audioout;
        }
};

class prodB: public super {
    public:
        prodB(){
            videoin = 1; audioin = 1; 
        }
        
};

class prodA: public prodB {
    public:
        prodA(){
            internet = 1; cable = 1; audioout = 1;
        }
};

class prodC: public prodB {
    public:
        prodC(){
            cable = 1; videoin = 0; videoout = 1; audioout = 1;
        }
};

class prodD: public prodA {
    public:
        prodD(){
            cable = 0; audioin = 0; videoout = 1; audioout = 0;
        }
};

int main(){
    prodA a1; prodB b1; prodC c1; prodD d1;

    // printing the table
    cout<<"\n\t\tProduct-A\tProduct-B\tProduct-C\tProduct-D";
    
    cout<<"\ninternet\t";
    if(a1.check_internet()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_internet()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_internet()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_internet()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\ncable\t\t";
    if(a1.check_cable()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_cable()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_cable()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_cable()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\nvideoin\t\t";
    if(a1.check_videoin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_videoin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_videoin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_videoin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\naudioin\t\t";
    if(a1.check_audioin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_audioin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_audioin()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_audioin()) cout<<"y\t\t";
    else cout<<"n\t\t";

    cout<<"\nvideoout\t";
    if(a1.check_videoout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_videoout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_videoout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_videoout()) cout<<"y\t\t";
    else cout<<"n\t\t";

    cout<<"\naudioout\t";
    if(a1.check_audioout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(b1.check_audioout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(c1.check_audioout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    if(d1.check_audioout()) cout<<"y\t\t";
    else cout<<"n\t\t";
    
    cout<<"\n\n";
}