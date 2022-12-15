//
//  main.c
//  name-age
//
//  Created by Tomasz Uroda on 14/12/2022.
//
#include <stdio.h>
#include <stdlib.h>
/*program asks user for his name, surname and age. Next it shows the given data*/


int main()
{

    char name[20], surname[20];
    int age;
    printf("Enter your name: \n: ");
    scanf("%s", name);
    fflush(stdin);
    printf("Enter your surname: \n: ");
    scanf("%s", surname);
    fflush(stdin);
    printf("Enter your age: \n: ");
    scanf("%i", &age);
    fflush(stdin);
    printf("You're %s %s and you're  %d years old. \n", name, surname, age);
    return 0;
}


