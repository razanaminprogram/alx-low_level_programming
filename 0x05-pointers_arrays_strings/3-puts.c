#include "main.h"

/**
 * _puts - prints a string to std output
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
_putchar('\n');
}
