#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier; // A , B , C , S , G
    char name[15];
} pokemon;

int main()
{
    pokemon a, b, c;
    a.attack = 100;
    a.hp = 120;
    a.speed = 80;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");

// b.attack=a.attack;
// b.hp=a.hp;
// b.speed = a.speed;
// b.tier = a.tier;  
// strcpy(b.name,a.name);

// or 

b=a; 
printf("%s",b.name);
    return 0;
}