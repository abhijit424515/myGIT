#include <iostream>
#include <cassert>
#include <climits>
using namespace std;

class Collection {
  int *S, cap, card;
  bool overflow_check(long long int t){
    return (t<=INT_MAX && t>=INT_MIN);
  }

 public:
  Collection(int sz) {
    assert(sz>0); cap = sz; card = 0;
    S = new int[sz];
  }

  void push_back(long long int elem) {
    assert(overflow_check(elem));
    assert(card<cap);
    S[card]=elem; card++;
  }

  int pop_back() {
    assert(card>0); 
    card--; 
    int t = S[card];
    S[card]=0; 
    return t;
  }
  int &operator[](int x){
    assert(x<card && x>=0);
    return S[x];
  }
  ~Collection() {
    delete S;
  }
};

int main() {
  Collection alpha(5);
  long long int x1,x2,x3,x4; cin>>x1>>x2>>x3>>x4;

  alpha.push_back(x1); alpha.push_back(x2); alpha.push_back(x3); alpha.push_back(x4);
  alpha.pop_back();

  cout<<alpha[0]<<endl<<alpha[1]<<endl<<alpha[2]<<endl;
}
