#include "stdio.h"
#include "main.h"

/**
 * _strpbrk - searches a string for set of bytes
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; accept[n] != '\0'; n++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
