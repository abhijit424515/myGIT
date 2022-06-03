#include <iostream>
int count_ways(int n){
    if(n<0){return 0;}
    if((n==0)||(n==1)){return 1;}
    int sum=0; 
    for(int i=n-1; n-i<7; i--){
        sum+=count_ways(i);
    }
    return sum;
}
// int count_ways(int n){
//     if(n==1){return 1;}
//     int pre_sum=1;
//     int pre_num=1;
//     int new_num;
//     for(int i=2; i<=n; i++){
//         new_num=pre_num+pre_sum;
//         pre_sum+=pre_num;
//         pre_num=new_num;
//     }
//     return new_num;
// }
