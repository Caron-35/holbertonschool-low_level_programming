#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: input string
 * Return: sign * result
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int verif = 0;
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
verif = 1;
result = result * 10 + (*s - '0');
s++;
}
if (!verif)
{
return (0);
}
return (sign * result);
}
