#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
char alphabet[26];
char letter = 'a';
int i;
for (i = 0; i < 26; i++)
{
alphabet[i] = letter;
letter++;
}
for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}
	putchar('\n');
return (0);
}
