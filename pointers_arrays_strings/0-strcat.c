#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * Description - premiere boucle while
 * (deplace ptr a la fin de dest)
 * 2eme boucle while (ajoute src a dest)
 * ajoute le terminateur nul
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr)
{
ptr++;
}
while (*src)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
