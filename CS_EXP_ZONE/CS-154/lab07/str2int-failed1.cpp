#include<iostream>
#include <string>
#include <cassert>
using namespace std;

int str2int (string s) {
   int v=0, i=1;
   for(int j=0; j < s.length(); j++){
      int x = (s[s.length()-j-1]-'0');
      v += x*i; i*=10;
   }
	return v;
};

int main() {
   string n; cin>>n;
   n = "-30009r729837893285ckjasbjkcjkandjcknad";                       
   // the code is not yet able to account for negative integers
   // also, the code is not yet able to reject non-integral strings
   // also, the code can't handle int overflows

   int x = str2int(n);
   cout<<"The given string was succesfully converted to the number\n"<<x<<endl;
}
