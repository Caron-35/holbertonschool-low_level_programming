#include "main.h"
/***/
char *string_toupper(char *)
{
char *original = str;
while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
 str++;
}
}
