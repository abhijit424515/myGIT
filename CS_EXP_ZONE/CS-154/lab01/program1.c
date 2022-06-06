#include<iostream>
#include<time.h>
#include<string>
using namespace std;

int main(int argc, char **argv){
	int thisarray[6];
	int N = stoi(argv[1]);
	
	srand(time(0));
	
	for(int x=0; x<6; x++){
		thisarray[x]=0;
	}
	for(int x=0; x<N; x++){
		int y = 1+rand()%6;
		thisarray[y-1] += 1;
	}
	for(int x=0; x<6; x++){
		cout<<"P("<<x+1<<")="<<thisarray[x]*1.0/(N*1.0)<<endl;
	}
}
