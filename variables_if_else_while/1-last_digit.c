#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and determines if the last digit
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
printf("Last digit of %d is ", n);
if (lastdigit > 5)
{
printf("%d and is greater than 5\n", lastdigit);
}
else if (lastdigit == 0)
{
printf("%d and is 0\n", lastdigit);
}
else
{
printf("%d and is less than 6 and not 0\n", lastdigit);
}
return (0);
}
