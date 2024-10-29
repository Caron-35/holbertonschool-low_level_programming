#include "main.h"
/**
 * swap_int - Swap the value of 2 integers
 * @a: number 1
 * @b: number 2
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
