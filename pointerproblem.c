#include <stdio.h>
int main(){ 
    typedef int* pointer;
    int x=5,y=7;
    pointer a =&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
} 