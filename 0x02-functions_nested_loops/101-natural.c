#include "stdio.h"

/**
 * main - program print summation
 * Return - 0 Successful
 */

int main(void)
{
	int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}

