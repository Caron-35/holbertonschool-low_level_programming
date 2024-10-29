#include "main.h"
/**
 * puts_half - Print half of the string
 * @str: string
 */
void puts_half(char *str)
{
int len = _strlen(str);
char *ptr = str;
if (len % 2 == 0) {
ptr += len / 2;
}
else
{
ptr += (len / 2) + 1;
}
while (*ptr != '\0') {
putchar(*ptr);
ptr++;
}
_putchar('\n');
}
