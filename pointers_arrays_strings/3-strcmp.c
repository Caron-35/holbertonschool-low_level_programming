#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Description - 1ere boucle continue si s1 n'est pas \0 et s1 et s2 sont égaux
 * Vérifie si les strings se terminent au même point
 * si oui il renvoie 0
 * sinon calcule la différence entre s1 et s2 et convertie en caractère
 * "unsigned char" pour avoir une comparaison correcte
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1==*s2);
if (*s1 == *s2)
{
return (0);
}
else
{
return (*(unsigned char *)s1 - *(unsigned char *)s2);
} 
}
