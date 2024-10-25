#include <stdio.h>
/**
 * print_to_98 - print to 98
 *
 * Void: nothing
 */
void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i < 98; i++) {
            printf("%d, ", i);
        }
        printf("98\n");
    } else {
        for (int i = n; i > 98; i--) {
            printf("%d, ", i);
        }
        printf("98\n");
    }
}
