#include <stdio.h>
int main(){
    int arr[7] = {1,4,2,8,19,0,12};
    int min =arr[0];
    for (int i=0; i<=6; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d\n",min);
    return 0;
}