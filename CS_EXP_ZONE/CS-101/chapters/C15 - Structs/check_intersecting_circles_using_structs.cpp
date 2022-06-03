#include<simplecpp>
struct Circ{
    double x,y,r;
};
void readData(Circ c[], int n){
    for(int i=0; i<n; i++){
        cin>>c[i].x>>c[i].y>>c[i].r;
    }
}
void showDisks(Circ c[],int n){
    initCanvas();
    for(int i=0; i<n; i++){
        Circle x(c[i].x,c[i].y,c[i].r);
        x.imprint();
    }
}
bool checkAllPairs(Circ c[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((c[i].x-c[j].x)*(c[i].x-c[j].x)+(c[i].y-c[j].y)*(c[i].y-c[j].y)<=(c[i].r+c[j].r)*(c[i].r+c[j].r))
                return true;
        }
    }
    return false;
}
int main(){
    int n; cin>>n;
    Circ c[n];
    readData(c,n);
    cout<<checkAllPairs(c,n)<<endl;
    showDisks(c,n);
    return 0;
}