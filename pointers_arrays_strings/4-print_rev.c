#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
/**
 * print_rev: print a string in reverse
 * @s: string to pring in reverse
 */
void print_rev(char *s)
{
int i = 0;
int len = _strlen(s);
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
