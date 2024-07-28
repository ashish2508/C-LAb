#include <stdio.h>

int main()
{
    typedef struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier; // A , B , C , S , G
    } Pokemon;
    Pokemon  pikachu ; 
    Pokemon  charizard ;
    Pokemon  Mewtwo; 
    Pokemon  Garchomp;

    printf("Enter the Attack Power of Pikachu : ");
    scanf("%d",&pikachu.attack);
    printf("Enter the Health Power of Pikachu : ");
    scanf("%d",&pikachu.hp);
    printf("Enter the Speed of Pikachu : ");
    scanf("%d",&pikachu.speed);
    printf("Enter the Tier of Pikachu : ");
    scanf(" %c",&pikachu.tier);

    printf("Stats of Pikachu are : ");
    printf("\tATT - %d\n", pikachu.attack);
    printf("\t\t\tHp - %d\n", pikachu.hp);
    printf("\t\t\tSpeed - %d\n", pikachu.speed);
    printf("\t\t\tTier - %c\n", pikachu.tier);


    printf("Enter the Attack Power of charizard : ");
    scanf("%d", &charizard.attack);
    printf("Enter the Health Power of charizard : ");
    scanf("%d", &charizard.hp);
    printf("Enter the Speed of charizard : ");
    scanf("%d", &charizard.speed);
    printf("Enter the Tier of charizard : ");
    scanf(" %c", &charizard.tier);
    printf("\nStats of Charizard are : ");
    printf("ATT - %d\n", charizard.attack);
    printf("\t\t\tHp - %d\n", charizard.hp);
    printf("\t\t\tSpeed - %d\n", charizard.speed);
    printf("\t\t\tTier - %c\n\n", charizard.tier);


    printf("Enter the Attack Power of Mewtwo : ");
    scanf("%d", &Mewtwo.attack);
    printf("Enter the Health Power of Mewtwo : ");
    scanf("%d", &Mewtwo.hp);
    printf("Enter the Speed of Mewtwo : ");
    scanf("%d", &Mewtwo.speed);
    printf("Enter the Tier of Mewtwo : ");
    scanf(" %c", &Mewtwo.tier);
    printf("\nStats of Mewtwo are : ");
    printf("ATT - %d\n", Mewtwo.attack);
    printf("\t\t\tHp - %d\n", Mewtwo.hp);
    printf("\t\t\tSpeed - %d\n", Mewtwo.speed);
    printf("\t\t\tTier - %c\n\n", Mewtwo.tier);


    printf("Enter the Attack Power of Garchomp : ");
    scanf("%d", &Garchomp.attack);
    printf("Enter the Health Power of Garchomp : ");
    scanf("%d", &Garchomp.hp);
    printf("Enter the Speed of Garchomp : ");
    scanf("%d", &Garchomp.speed);
    printf("Enter the Tier of Garchomp : ");
    scanf(" %c", &Garchomp.tier);
    printf("\nStats of Garchomp are : ");
    printf("ATT - %d\n", Garchomp.attack);
    printf("\t\t\tHp - %d\n", Garchomp.hp);
    printf("\t\t\tSpeed - %d\n", Garchomp.speed);
    printf("\t\t\tTier - %c\n\n", Garchomp.tier);

    return 0;
} 