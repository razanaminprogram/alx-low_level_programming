#include <stdio.h>
/**
 * main - A program prints numbers using putchar
 * Return: 0 (Success)
 */

int main(void)
{
int d;

for (d = '0'; d <= 9; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
