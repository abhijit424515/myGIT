#include<iostream>
using namespace std;
/* For the taxi service,
input =>
    d 17621 -> driver with ID 17621
    c -> customer/passenger
    x -> terminate

if c -> if taxi availiable -> check Waiting taxi, then give the taxi that is first in queue, and print the driver ID
                if no taxi -> end with message
if d 16721 -> note down ID, and add to queue
*/
const int n=100; // max length of queue
int ID_based_Q[n], nWaiting=0;
int main(){
    while(true){
        char command; cin>>command;
        if(command=="x"){
            return 0;
        }
        else if(command=="d"){
            int ID; cin>>ID;
            ID_based_Q[nWaiting]=ID; nWaiting++;
        }
        else if(command=="c"){
            if(nWaiting>0){
                cout<<ID_based_Q[0];
                for(int i=0; i<nWaiting-1; i++){
                    ID_based_Q[i]=ID_based_Q[i+1]; nWaiting--;
                }
            }
            else{
                cout<<"No drivers available";
                continue;
            }
        }
        else{
            cout<<"Invalid command";
        }    
    }   
    return 0;
}