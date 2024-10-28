#include "main.h"
/**
 * print_triangle - Print a triangle
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
