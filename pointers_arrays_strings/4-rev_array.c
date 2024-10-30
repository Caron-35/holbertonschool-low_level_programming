#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i]; // Stocker l'élément courant
a[i] = a[n - 1 - i]; // Échanger avec l'élément symétrique
a[n - 1 - i] = temp; // Mettre à jour l'élément symétrique
}
}
