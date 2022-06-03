#include<iostream>
#include <string>
#include <cassert>
using namespace std;

int str2int (string s) {
   int v=0, i=1; string x=""; int sign=1;
   if(s[0]=='-')
      for(int j=1; j<s.length(); j++){
         x+=s[j]; 
         sign = -1;
      }
   else x=s;

   for(int j=0; j < x.length(); j++){
      int y = (x[x.length()-j-1]-'0');
      v += y*i; i*=10;
   }
	return v*sign;
};

int main() {
   string n; cin>>n;
   n = "30009r729837893285ckjasbjkcjkandjcknad";                       
   // the code is now able to account for negative integers
   // however, the code is not yet able to reject non-integral strings
   // also, the code can't yet handle int overflows
   
   int x = str2int(n);
   cout<<"The given string was succesfully converted to the number\n"<<x<<endl;
}
