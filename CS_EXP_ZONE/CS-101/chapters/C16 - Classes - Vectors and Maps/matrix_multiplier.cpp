#include<iostream>
#include<vector>
using namespace std;
vector<vector<double> > mltp(vector<vector<double> > m1,vector<vector<double> > m2, int n1, int n2, int n4){
    vector<vector<double> > m(n1,vector<double>(n4,0));
    for(int i=0; i<n1; i++){
        for(int j=0; j<n4; j++){
            double sum=0;
            for(int k=0; k<n2 ; k++){
                sum+=m1[i][k]*m2[k][j];
            }
            m[i][j]=sum;
        }
    }
    return m;
}
int main(){
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    if(n2!=n3){
        cout<<"Matrix multiplication not possible";
    }
    vector<vector<double> > matrix1(n1,vector<double>(n2,0)),matrix2(n3,vector<double>(n4,0));
    vector<vector<double> > m(n1,vector<double>(n4,0));
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0; i<n3; i++){
        for(int j=0; j<n4; j++){
            cin>>matrix2[i][j];
        }
    }
    m=mltp(matrix1,matrix2,n1,n2,n4);
    for(int i=0; i<n1; i++){
        for(int j=0; j<n4; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}