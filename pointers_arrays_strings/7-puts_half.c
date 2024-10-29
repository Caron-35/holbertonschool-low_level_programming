#include "main.h"
/**
 * puts_half - Print half of the string
 * @str: string
 */
void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
int start = (length % 2 == 0) ? (length / 2) : (length / 2 + 1);
for (i = start; i < length; i++)
{
_putchar(str[i]);
}   
_putchar('\n');
}
