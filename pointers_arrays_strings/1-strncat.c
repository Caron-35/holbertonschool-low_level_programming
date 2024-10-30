#include "main.h"
/**
 * _strncat - Concatenates 2 strings but stop at n
 * @dest: destination
 * @src: source
 * @n: nombre maximum de caractères à ajouter
 * Description - Fais la fonction strcat avec une limite
 * a "n" caracteres
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr)
{
ptr++;
}
while (n-- && *src)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
