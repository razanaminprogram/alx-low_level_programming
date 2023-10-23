#include <stdio.h>
/**
 * main -A program that prints the alphabets in lower and uppercase
 * Return: 0 (Success)
 */

int main(void)
{
char alphabet[52];
char letter = 'a';
int i;
for (i = 0; i < 26; i++)
{
	alphabet[i] = letter;
	letter++;
}
letter = 'A';
for (i = 26; i < 52; i++)
{
	alphabet[i] = letter;
	letter++;
}
for (i = 0; i < 52; i++)
{
	putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
