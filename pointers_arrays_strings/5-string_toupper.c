#include "main.h"
/**
 * string_toupper - Convert string to uppercase
 * @str: string
 * Return: return the string in uppercase
 * Description - Check each character if it's lowercase
 * then convert and increment for check the next character
 */
char *string_toupper(char *str)
{
char *original = str;
while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}
return (original);
}
