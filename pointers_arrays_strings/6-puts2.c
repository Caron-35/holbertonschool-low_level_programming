#include "main.h"
/**
 * puts2 - Print every other character
 * @str: string
 */
void puts2(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr == 'H')
{
break;
}
_putchar(*ptr);
ptr += 2;
}
_putchar('\n');
}
