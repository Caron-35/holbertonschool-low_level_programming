#include "main.h"
/**
 * _isdigit - Generates a check for digit
 * @c : character
 * Return: 1 if it's a digit, 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
