#include "main.h"
#include "stdio.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: 0 Success
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
