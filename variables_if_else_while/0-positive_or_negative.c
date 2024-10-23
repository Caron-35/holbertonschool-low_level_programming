#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry of the program */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%d est positif\n", n);
    }
    else if (n < 0)
    {
        printf("%d est negatif\n", n);
    }
    else
    {
        printf("%d est un zero\n", n);
    }

    return (0);
}
