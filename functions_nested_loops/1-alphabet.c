#include "main.h"
#include <stdio.h>

/**
 * main - Generates a program to print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
return (0);
}
