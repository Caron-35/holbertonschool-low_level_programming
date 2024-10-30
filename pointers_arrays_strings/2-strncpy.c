#include "main.h"
/**
 * _strncpy - Copy a string and stop at n point
 * @dest: destination
 * @src: source
 * @n: nombre de caracteres a copier
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;
while (n-- && *src)
{
*temp++ = *src++;
}
while (n-- >= 0)
{
*temp++ = '\0';
}
return (dest);
}
