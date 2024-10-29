#include "main.h"
/**
 * _strcpy - copy the string pointed by src
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*temp++ = *src;
}
*temp = '\0';
return (dest);
}
