#include <stdio.h>
#include "../include/functions.h"

int main(void)
{
    int number;
    int stop;
    
    do
    {
        home_screen();

        scanf("%d", &number);

        multiplication(number);

        end_screen();
        
        scanf("%d", &stop);
    } while (stop != 1);

    return 0;
}