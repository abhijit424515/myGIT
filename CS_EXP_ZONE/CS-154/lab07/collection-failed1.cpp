#include <iostream>
#include <cassert>
#include <climits>
using namespace std;

class Collection {
  int *S, cap, card;
 public:
  Collection(int sz) {
    S = new int[sz];
  }

  void push_back(int elem) {
    S[card]=elem; card++;
  }

  int pop_back() {
    card--; 
    int t = S[card];
    S[card]=0; 
    return t;
  }
  int &operator[](int x){
    return S[x];
  }
  ~Collection() {
    delete S;
  }
};

int main() {
  int n; 
  // cin>>n;
  n=-3;                                   // invalid value of sz (collection capacity) (not accounted for in this code)
  Collection alpha(n);

  int x1,x2,x3,x4; 
  cin>>x1>>x2>>x3>>x4;
  alpha.push_back(x1); 
  alpha.push_back(x2); 
  alpha.push_back(x3); 
  alpha.push_back(x4);                    // pushed more elements than collection capacity (not accounted for in this code)

  alpha.pop_back();

  cout<<alpha[-2]<<endl;                  // invalid index for element in collection (not accounted for in this code)
}
