#include <stdio.h>
/**
 * main - Generate a program that print alphabet in reverse
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
