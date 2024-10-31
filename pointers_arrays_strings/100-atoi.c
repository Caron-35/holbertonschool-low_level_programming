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
if (*s >= '0' && *s <= '9')
{
verif = 1
result = result * 10 + (*s - '0');
s++;
}
 if else ( verif = 1)
{
break;
}
return (sign * result);
}
