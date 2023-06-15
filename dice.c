#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    printf("Rolling dice...\n");
    int die1, die2, total;
    srand((unsigned int)time(NULL));
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    total = die1 + die2;
    printf("Die 1:%d\n", die1);
    printf("Die 2:%d\n", die2);
    printf("Total value: %d\n", total);
    if (total > 7)
        printf("You won!\n");
    else
        printf("You lost!\n");
}
