#include "main.h"
/***/
int print_last_digit(int r)
{
int a = r % 10;
_putchar(a + '0');
 return write(1, &a, 1);
}
