#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: the string to work with
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
