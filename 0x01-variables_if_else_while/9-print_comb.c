#include <stdio.h>
/**
 * main - A program that prints single digit
 * Return: 0 (Success)
 */

int main(void)
{

int a;

for (a = 0; a <= 9; a++)
{
	putchar(a + '0');
	if (a < 9)
	{
	putchar(',');
	putchar(' ');
	}
}
return (0);
}
