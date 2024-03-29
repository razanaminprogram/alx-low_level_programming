#include "main.h"

/**
 * print_square - prints  a square
 * @size: the size of the square 
 * Return: Success
 */

void print_square(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 1; x <= size; x++)
		{
			_putchar(35);
		}
		_putchar(32);
		_putchar('\n');
	}
}
