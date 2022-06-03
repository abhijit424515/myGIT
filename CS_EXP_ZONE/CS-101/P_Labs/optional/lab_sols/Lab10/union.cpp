#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char a[n], b[m];
    char u[n+m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    int i, j, k;
    for(i=0, j=0, k=0; i<n && j<m;){
        if(a[i] <= b[j]){
            u[k++] = a[i++];
        }
        else{
            u[k++] = b[j++];
        }
    }

    while(i<n){
        u[k++] = a[i++];
    }
    while(j<m){
        u[k++] = b[j++];
    }

    char u2[n+m];
    int len = 0;
    u2[len++] = u[0];

    for(int i = 1; i < n+m; i++){
        if(u[i] != u[i-1]){
            u2[len++] = u[i];
        }
    }

    for(int i = 0; i < len; i++){
        cout << u2[i] << " ";
    }
    cout << endl;
}
