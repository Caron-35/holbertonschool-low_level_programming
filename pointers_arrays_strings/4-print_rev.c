#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int i = 0;
int len = _strlen(char s);
for (i = len - 1; i >=0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
