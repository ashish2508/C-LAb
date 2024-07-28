#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7] = {1,3,2,4,1,2,3};
    for (int i = 0; i <=6;i++){
        for(int j = i+1; j<=6;j++){
            if(arr[j]==arr[i]){
                printf("%d is unique element\n",arr[i]);
                
                
            }
            
        }
        break;
    }
    return 0;
}

