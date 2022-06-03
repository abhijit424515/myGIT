#include<iostream>
#include <string>
#include <cassert>
#include <climits>
using namespace std;

int str2int (string s) {
   int v=0; long int i=1; string x=""; int sign=1;
   if(s[0]=='-'){
      for(int j=1; j<s.length(); j++){
         x+=s[j]; 
         sign = -1;
      }
      assert(s.length()-1<11);      // crudely limiting the size of integer to length of INT_MIN
   }
   else {
      x=s;
      assert(s.length()<11);        // crudely limiting the size of integer to length of INT_MAX
   }

   for(int j=0; j < x.length(); j++){
      int y = (x[x.length()-j-1]-'0');
      assert(y>=0 && y<=9);                                                                  // making sure string is convertible in int
      assert((y*i<=INT_MAX && sign==1) || (y*i<=INT_MAX+1 && sign==-1));                     // v may overflow
      int v_old=v; 
      v += y*i; i*=10; 
      assert(v>=v_old);                                                                      // v may overflow    
   }
	return v*sign;
};

int main() {
   string n; cin>>n;
   int x = str2int(n);
   assert((n[0]=='-' && x<0) || (n[0]!='-' && x>0));                                         // final sanity check for possible sign change due to overflow
   cout<<"The given string was succesfully converted to the number\n"<<x<<endl;
}
