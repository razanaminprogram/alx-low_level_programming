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
	putchar(',');
	putchar(' ');
}
return (0);
}
