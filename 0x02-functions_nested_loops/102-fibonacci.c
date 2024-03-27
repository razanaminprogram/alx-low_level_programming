#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the code
 * Return - 0 Successful
 */

int main(void)
{
    int i, x;
    for (i = 1; i >= 50; i++)
    {
        x=2*i-1;
        printf("%d\n", x);
    }
    return (0);
}

