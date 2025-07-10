#include <stdio.h>
#include "../include/functions.h"

int main(void)
{
    int number;

    home_screen();
    
    scanf("%d", &number);
    
    multiplication(number);

    end_screen();
    
    return 0;
}