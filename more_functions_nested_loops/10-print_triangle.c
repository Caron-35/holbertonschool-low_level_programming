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
for (i = size; i <= size; i++)
{
  for (j = 1; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
