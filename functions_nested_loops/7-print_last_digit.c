#include "main.h"
/**
 * print_last_digit - print the last digit
 * @r: lalala
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
int a = r % 10;
if (a < 0)
a = -a;

_putchar(a + '0');
return (a);
}
