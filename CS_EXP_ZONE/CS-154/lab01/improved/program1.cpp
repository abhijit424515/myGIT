#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class dice{
	private:
		int count[6];
	public:
		dice(){
			for(int x=0; x<6; x++){
				count[x]=0;
			}
		}
		void func1(int y){
			count[y-1] += 1;
		}
		int func2(int x){
			return count[x];
		}
};

int main(int argc, char **argv){
	int N = atoi(argv[1]);
	dice adice;
	srand(time(0));
	
	for(int x=0; x<N; x++){
		int y = 1+rand()%6;
		adice.func1(y);
	}
	for(int x=0; x<6; x++){
		cout<<"P("<<x+1<<")="<<adice.func2(x)*1.0/(N*1.0)<<endl;
	}
}
