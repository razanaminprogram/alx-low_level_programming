#include <stdio.h>
/**
 * main - A program that prints two two digits comb
 * Return: 0 (Success)
 */
int main(void)
{

int a, b;

for (a = 0; a < 100; a++)
{
for (b = a; b < 100; b++)
{
int c1 = a / 10;
int c2 = a % 10;
int d1 = b / 10;
int d2 = b % 10;
putchar('0' + c1);
putchar('0' + c2);
putchar(' ');
putchar('0' + d1);
putchar('0' + d2);
if (a != 99 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

