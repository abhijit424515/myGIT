#include<iostream>
using namespace std;
/* feed, then display marks =>
first part -> 
    input no of students as noofrollno
    input roll number (arbitrary), and respective marks
    keep tab of highest marks
second part->
    input roll number as r
    create termination condition (r==-1)
    if valid roll no, display marks
finally, display highest marks
*/
int main(){
    int noofrollno; cin>>noofrollno; int maxmarks=0; long int topper;
    long int rollno[noofrollno]; int marks[noofrollno];
    for(int i=0; i<noofrollno; i++){
        cin>>rollno[i]>>marks[i]; 
        if(marks[i]>maxmarks){
            topper=rollno[i]; maxmarks=marks[i];
        }
    }
    while(true){
        long int r; cin>>r;
        if(r==-1)
            break;
        else{
            for(int i=0; i<noofrollno; i++){
                if(r==rollno[i])
                    cout<<"Your marks: "<<marks[i]; 
                    cout<<"Highest marks: "<<maxmarks;
                    continue;
            }
        }
    }
}