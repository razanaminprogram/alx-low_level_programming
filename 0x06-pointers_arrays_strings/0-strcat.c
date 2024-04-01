#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the string will be appended
 * @dest: the string that will be appended to
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
for (i = 0; src[i] != 0; i++)
{
	dest[len] = src[i];
}
dest[len] = '\0';
return (dest);
}
