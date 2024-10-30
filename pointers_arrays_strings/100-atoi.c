#include "main.h"
/**
 * _atoi - Generates the function atoi
 * @s: string
 * Return: sign * result
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (sign * result);
}
