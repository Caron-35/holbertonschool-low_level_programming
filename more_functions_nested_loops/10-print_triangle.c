#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size : size
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = size; i >= size; i--)
{
for (j = 0; j < size - i; j--)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
