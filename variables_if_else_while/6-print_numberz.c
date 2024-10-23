#include <stdio.h>
/**
 * main - Generates a program that prints all single digits
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}
