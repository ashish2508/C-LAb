#include <stdio.h>
#include <limits.h>
int main (){
    int arr [7]= {1,2,3,4,5,6,7};
    int max = INT_MIN;
    int smax= INT_MIN;
    // for(int i=0; i<=6;i++){
    //     if(max<arr[i]){
    //     max=arr[i];
    //     }
    // }//max=-4;
    // for(int i=0; i<=6;i++){
    //     if(arr[i] != max && smax<arr[i]){
    //         smax=arr[i];
    //     }
    // }
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i] ;
        }
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("%d\n",smax);
    return 0;
}   