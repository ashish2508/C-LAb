#include <stdio.h>
int main(){
    printf("Lets Learn about pointers\n");
    int a=76;
    int* ptra = &a;
    printf("the address of the pointer to a is %p\n",&ptra);
    printf("The value of a is %d\n",*ptra);
    return 0;
}