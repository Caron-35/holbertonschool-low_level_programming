#include "main.h"
/**
 * print_triangle - Print a triangle
 */
void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
