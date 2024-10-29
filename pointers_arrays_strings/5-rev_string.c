#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string
 */
void rev_string(char *s)
{
int len = 0;
char temp;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
/*
  void rev_string(char *s)
{
char *start = s;            // Pointeur vers le début de la chaîne
char *end = s;              // Pointeur vers la fin de la chaîne
char temp;
// Déplacer le pointeur `end` à la fin de la chaîne
 while (*end != '\0') {
end++;
}
end--; // Ajuster pour pointer sur le dernier caractère avant
le terminateur nul

// Échanger les caractères en place
while (start < end) {
temp = *start;
*start = *end;
*end = temp;
start++;               // Avancer le pointeur `start`
end--;                 // Reculer le pointeur `end`
}
}
*/
