#include <stdio.h>
/**
 * main - Generate a program for that prints all possible
 *        combinatuions of digit number
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
