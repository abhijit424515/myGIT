#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    // partition in quicksort fn
    int pivot = arr[end];
    int i = start - 1;
    for(int j=start; j < end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}

void quicksort(int *arr, int start, int end){
    if(start < end){
        int pivot = partition(arr, start, end);
        quicksort(arr, start, pivot-1);
        quicksort(arr, pivot+1, end);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}