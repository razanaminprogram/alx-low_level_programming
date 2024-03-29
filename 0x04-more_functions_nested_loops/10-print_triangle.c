#include "main.h"

/**
 * print_triangle - function that prints a triangle,
 * @size: is the size of the triangle
 * Return: Success
 */

void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (x = size - i; x > 1; x--)
		{
			_putchar(32);
		}
		for (y = 0; y <= i; y++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
	}
}
