#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and determines if the last digit is greater than 5, 0 or less
 *       than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastdigit = abs(n) % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("%d and is greater than 5", lastdigit);
}
else if (n == 0)
{
printf("%d and is 0", lastdigit);
}
else
{
printf("%d and is less than 6 and not 0", lastdigit);
}
return (0);
}
