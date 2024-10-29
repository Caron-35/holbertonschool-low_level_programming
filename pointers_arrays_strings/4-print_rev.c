#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int i = 0;
int len = 0;
while (s[len] != '\0')
{len ++;
}
return (len);
for (i = len - 1; i >=0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
