#include "main.h"

/**
 * _islower - check lowerscase char
 * @c: the char to be checked
 * Return: 1 for lowercase char or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
