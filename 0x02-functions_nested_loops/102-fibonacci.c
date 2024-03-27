#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the code
 * Return - 0 Successful
 */

int main(void)
{
int fib[50]; 
int i;
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++) {
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 49; i++) {
printf("%d, ", fib[i]);
}
printf("%d\n", fib[49]);
return 0;
}

