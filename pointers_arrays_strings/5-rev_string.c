#include "main.h"
/***/
void rev_string(char *s)
{
int len = 0;
char temp;
while (s[len] != '\0')
{
len++;
}
for (int i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
