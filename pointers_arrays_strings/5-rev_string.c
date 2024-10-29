#include "main.h"
/***/
void rev_string(char *s)
{
char temp;
int len = _strlen(s);
int i = 0;
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
