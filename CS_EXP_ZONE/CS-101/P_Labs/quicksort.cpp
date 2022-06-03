#include<iostream>
using namespace std;
void quicksort(int arr[], int &start, int &end){
    int mid_index=(start+end)/2; int n=sizeof(arr)/sizeof(arr[0]);
    int lesser_term[n], greater_term[n];
    int i=0,j=0;                                                        // number of terms = i+j=1
    for(int k=0; k<n; k++){
        if(arr[k]<=arr[mid_index]){
            lesser_term[i]=arr[k]; i++;
        }
        else if(arr[k]>arr[mid_index]){
            greater_term[j]=arr[k]; j++;
        }
    }
    int new_array[n]; j+=i;                                             // number of terms = j+1
    for(int k=0; k<n; k++){
        if(k<i){
            new_array[k]=lesser_term[k];
        }
        else if(k==i){
            new_array[k]=arr[mid_index];
        }
        else if(k>i && k<=j){
            new_array[k]=greater_term[k-i-1];
        }
    }
    for(int k=0; k<n; k++){
        arr[k]=new_array[k];
    }
}   
int main(){
    int n; cin>>n; int A[n];
    for(int i=0; i<n; i++){                                             // initialization
        cin>>A[i];
    }
    int start=0, end=n-1;
    while(true){
        quicksort(A, start, end);
        
        if(){
            break;
        }
    }
}