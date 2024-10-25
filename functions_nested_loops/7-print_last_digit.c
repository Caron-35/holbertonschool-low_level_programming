#include "main.h"
/***/
int print_last_digit(int r)
{
int a = r % 10;
if (a < 0)
a = -a;

_putchar(a + '0');
return (a);
}
