#include "main.h"

/**
 *  _isupper - cheks for uppercase
 *  @c: the char to be checked
 *  Return: 1 if uppercase 0 otherwise
 */

int  _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
