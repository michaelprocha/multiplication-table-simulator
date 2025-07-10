#include <stdio.h>
#include "../include/functions.h"

void home_screen()
{
    printf("-----------------------------------------------------------------------\n");
    printf("------------------------ multiplication table -------------------------\n");
    printf("-----------------------------------------------------------------------\n");
    printf("What number do you want to know the multiplication table for?\n");
}

void multiplication(int number)
{
    for (int i = 0; i < 11; i++)
    {
        int result = number * i;
        printf("the multiplication table of %d x %d is %d\n", number, i, result);
    }
}

void end_screen()
{
    printf("-----------------------------------------------------------------------\n");
    printf("Do you want to continue?\n");
}