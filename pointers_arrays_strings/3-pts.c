#include "main.h"
/**
 * _puts - Print a string of characters
 * @str: string
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
