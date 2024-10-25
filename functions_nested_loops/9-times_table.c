#include "main.h"
/**
 * times_table - table of 9
 *
 * Void: rien
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int f = i * j;
if (j == 0)
{
_putchar(f + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (f < 10)
{
_putchar(' ');
_putchar(f + '0');
}
else
{
_putchar((f / 10) + '0');
_putchar ((f % 10) + '0');
}
}
}
_putchar('\n');
}
}
