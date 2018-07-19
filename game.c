#include <stdio.h>

int main()
{
    int people;
    printf("How many people are on your flight \n");
    scanf(" %d", &people);

    if (people >= 250){
        printf("You are going to need a 747!");
    }
    else if (people >= 200){
        printf("You are going to take a 767");
    }
    else if (people >= 150){
        printf("You are going to take a 757");
    }
    else{
        printf("You are going to take a shitty a320...");
    }

    return 0;
}
