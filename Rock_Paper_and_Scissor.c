#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int comp()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    char name[15];
    int input;
    printf("Enter your name\n");
    gets(name);
label:
    printf("Press 0 for Rock\nPress 1 for Scissors\nPress 2 for Paper\n");
    scanf("%d", &input);
    printf("Now, Computer's turn\n%d\n", comp());
    if (input != comp())
    {

        if (input == 0 && comp() == 1)
        {
            printf("%s is the winner\n", name);
        }
        if (input == 0 && comp() == 2)
        {
            printf("Computer is the winner\n");
        }
        if (input == 1 && comp() == 0)
        {
            printf("Computer is the winner\n");
        }
        if (input == 1 && comp() == 2)
        {
            printf("%s is the winner\n", name);
        }
        if (input == 2 && comp() == 0)
        {
            printf("%s is the winner\n", name);
        }
        if (input == 2 && comp() == 1)
        {
            printf("Computer is the winner\n");
        }
    }
    else
        goto label;
    return 0;
}