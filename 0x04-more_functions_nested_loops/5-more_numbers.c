#include "main.h"

/**
 * more_numbers - prints numbers 14 times
 * Return: Success
 */

void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y < 10)
{
_putchar('0' + y);
}
else
{
_putchar('1');
_putchar((y % 10) + '0');
}
}
_putchar('\n');
}
}

