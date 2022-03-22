#include<iostream>
using namespace std;
int countpairs(int a[], int n, int i, int max_val, int min_val){
    int first_for_max=i+1; int last_for_max=n-1; int first_for_min=i+1; int last_for_min=n-1; // 2 variables each for binary method applied on each border value, so total 4 variables
    if(last_for_min==first_for_max && (a[first_for_max]>max_val || a[last_for_min]<min_val)){ // if i+1=n-1, and value of this index is in the range(min_val, max_val)
        return 0;
    }
    if(a[last_for_max]<min_val || a[first_for_min]>max_val){            // min value is bigger than any value in array, or the max value is smaller than any value in array
        return 0;
    }
    if(a[last_for_max]<=max_val){
        first_for_max = n-1; last_for_max = n-1;                        // max value is bigger than any value in array
    }
    if(a[first_for_min]>=min_val){
        first_for_min = i+1; last_for_min = i+1;                        // min value is smaller than any value in array
    }
    while (last_for_max-first_for_max>1 && a[first_for_max]<max_val && a[last_for_max]>max_val){    // epsilon for binary method is 1
        if (a[(first_for_max+last_for_max)/2]=max_val){
            first_for_max = (first_for_max+last_for_max)/2; last_for_max=first_for_max; break;
        }
        else if (a[(first_for_max+last_for_max+1)/2]=max_val){                                              // odd cases are to be considered
            first_for_max = (first_for_max+last_for_max+1)/2; last_for_max=first_for_max; break;
        }
        else if (a[(first_for_max+last_for_max+1)/2]<max_val){                                              // odd cases are to be considered
            first_for_max = (first_for_max+last_for_max+1)/2;                                               // +1 for covering up the bias of FLOOR function
        }
        else if (a[(first_for_max+last_for_max)/2]>max_val){                                                // odd cases are to be considered
            last_for_max = (first_for_max+last_for_max)/2;
        }
        else if (a[(first_for_max+last_for_max)/2]<max_val && a[(first_for_max+last_for_max+1)/2]>max_val){ // odd cases are to be considered
            first_for_max=(first_for_max+last_for_max)/2; last_for_max=(first_for_max+last_for_max+1)/2; break;   // shortcut cases
        }

        if(a[first_for_max]==max_val){
            last_for_max=first_for_max+1;
        }
        if(a[last_for_max]==max_val){
            first_for_max=last_for_max-1;
        }
    }
    while (last_for_min-first_for_min>1 && a[first_for_min]<min_val && a[last_for_min]>min_val){    // epsilon for binary method is 1
        if (a[(first_for_min+last_for_min)/2]=min_val){
            first_for_min = (first_for_min+last_for_min)/2; last_for_min=first_for_min; break; 
        }
        else if (a[(first_for_min+last_for_min+1)/2]=min_val){                                              // odd cases are to be considered
            first_for_min = (first_for_min+last_for_min+1)/2; last_for_min=first_for_min; break;
        }

        else if (a[(first_for_min+last_for_min+1)/2]<min_val){                                              // odd cases are to be considered
            first_for_min = (first_for_min+last_for_min+1)/2;                                               // +1 for covering up the bias of FLOOR function
        }
        else if (a[(first_for_min+last_for_min)/2]>min_val){                                                // odd cases are to be considered
            last_for_min = (first_for_min+last_for_min)/2;
        }
        else if (a[(first_for_min+last_for_min)/2]<min_val && a[(first_for_min+last_for_min+1)/2]>min_val){ // odd cases are to be considered
            first_for_min=(first_for_min+last_for_min)/2; last_for_min=(first_for_min+last_for_min+1)/2; break;   // shortcut cases
        }

        if(a[first_for_min]==min_val){                                                                      // conditions to check if we need to stop loop
            last_for_min=first_for_min+1; break;
        }
        if(a[last_for_min]==min_val){                                                                       // conditions to check if we need to stop loop
            first_for_min=last_for_min-1; break;
        }
    }
    while(first_for_min-1>i && a[first_for_min-1]==a[first_for_min]){                                       // checking for repeated values in array
        first_for_min--;
    }
    while(last_for_min-1>i && last_for_min>=first_for_min && a[last_for_min-1]==a[last_for_min]){           // checking for repeated values in array
        last_for_min--;
    }
    while(last_for_max+1<n && a[last_for_max+1]==a[last_for_max]){                                          // checking for repeated values in array
        last_for_max++;
    }
    while(first_for_max+1<n && a[first_for_max+1]==a[first_for_max] && last_for_max>=first_for_max){        // checking for repeated values in array
        first_for_max++;
    }
    // cout<<last_for_min<<" "<<first_for_max<<" ";
    return (first_for_max-last_for_min+1);
}
int main(){
    int n,l,r; cin>>n>>l>>r; int a[n]; int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        int max_val=r-a[i]; int min_val=l-a[i];
        // cout<<sum<<" "; 
        sum+=countpairs(a, n, i, max_val, min_val);
        // cout<<sum<<endl; 
    }
    cout<<sum;
}
