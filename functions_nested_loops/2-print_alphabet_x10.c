#include "main.h"
/**
 * print_alphabet_x10 - print 10 times alphabet
 *
 * Void: nothing
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
