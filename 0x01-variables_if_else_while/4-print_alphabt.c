#include <stdio.h>
/**
 * main - A program that prints the alphabet except qand e
 * Return: 0 (Success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}

