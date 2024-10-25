#include "main.h"
/**
 * _isalpha - check if it's lower case
 * @c: character
 * Return: 1 if check lowercase
 */
int _isalpha(int c)
{
return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
