#include "stdio.h"

/**
 * rot13 - encoder rot13
 * @str: pointer to string
 * Return: str
 */

char *rot13(char *str)
{
int i, j;
char delta[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == delta[j])
{
str[i] = datarot[j];
}
}
}
return (str);
}
