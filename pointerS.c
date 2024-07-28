#include <stdio.h>
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier; // A , B , C , S , G
        char name[20];
    } pokemon;

int main(){
    pokemon pikachu;
 //int* X-> stores address of integer value
    pokemon* x = &pikachu;
    return 0;
}