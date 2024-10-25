#include "main.h"
/***/
void times_table(void)
{
    int i, j;
    int f = i*j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
	  _putchar(f);
            if (j < 9)
            {
	      _putchar(',');
	      _putchar(' ');
            }
        }
        _putchar("\n");
    }
    return (0);
}
