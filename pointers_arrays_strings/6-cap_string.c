#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 * @str: string
 * Return: string in cap
 */
char *cap_string(char *str) {
char *ptr = str;
int new_word = 1;
while (*ptr)
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' ||
*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}') {
new_word = 1;
}
else if (new_word && *ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
new_word = 0;
}
else
{
new_word = 0;
}
ptr++;
}
return (str);
}
