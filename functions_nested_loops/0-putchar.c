#include "main.h"
#include <string.h>
/**
 * main - Generate a program that print _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; i != (int)strlen(str); i++)
		_putchar(str[i]);
	return (0);
}
