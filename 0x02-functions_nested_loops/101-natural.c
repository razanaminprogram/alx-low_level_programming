#include "stdio.h"

/**
 * main - program that computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return - 0 Successful
 */

int main(void)
{
	int i, sum;

for (i = 0; i < 1024; i++)
{
 if (i % 3 == 0 || i % 5 == 0)
        {
		sum = 0;
		sum = sum + i;
	}
}
 printf("%d", sum);
 return (0);
 }

