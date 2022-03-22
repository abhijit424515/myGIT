#include<iostream>
using namespace std;
const int N=100;
struct Queue{
    int elements[N],nWaiting,front;
    void initialize(){
        nWaiting=0; front=0;
    }
    bool insert(const int &v){
        if(nWaiting>=N){return false;}
        elements[front+nWaiting%N]=v; nWaiting++;
        return true;
    }
    bool remove(int &v){
        if(nWaiting==0){return false;}
        v=elements[front];
        front=(front+1)%N; nWaiting--;
        return true;
    }
    bool waiting(const int &v,int &x){
        for(int i=front; i<front+nWaiting; i++){
            if(elements[i%N]==v){x=i-front; return true;}
        }
        return false;
    }
};

int main(){
    Queue q; q.initialize();
    while(true){
        char c; cin>>c;
        if(c=='d'){
            int driverID; cin>>driverID;
            if(!q.insert(driverID)){cout<<"Queue is full\n";}
        }
        else if(c=='c'){
            int driverID; 
            if(!q.remove(driverID)){cout<<"No taxi available\n";}
            else{cout<<"Assigning "<<driverID<<endl;}
        }
        else if(c=='w'){
            int driverID; cin>>driverID; int x;
            if(!q.waiting(driverID,x)){cout<<"The mentioned driver is not waiting\n";}
            else{cout<<"There are "<<x<<" drivers waiting before the mentioned driver\n"<<endl;}
        }
        else if(c=='x'){
            break;
        }
    }
    return 0;
}