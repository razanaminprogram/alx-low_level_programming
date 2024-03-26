#include "stdio.h"
#include "main.h"

/**
 * print_times_table - prints the time table of the input
 * @n: the number which its time table will be printed
 * Return - 0 Successful
 */

void print_times_table(int n)
{
	int x, i, m ;
	if (n >= 0 && n <= 15)
	{
		for(i = 0; i <= n; i++)
		{
     for(m = 0; m <= n; m++)
     {
	     x= n * m;
	     printf("%d, ", x);
     }
     printf("\n");
		}
	}
	}

