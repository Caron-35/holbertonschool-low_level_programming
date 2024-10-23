#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and determines if it is positive,
 *        negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Determine si n est superieur, egal ou inferieur a 0 */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
