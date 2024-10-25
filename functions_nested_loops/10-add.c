#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * Void: nothing
 */
void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i < 98; i++) {
            // Print the number
            if (i < 10) {
                _putchar(i + '0'); // Handle single digits
            } else {
                _putchar((i / 10) + '0'); // Print tens place
                _putchar((i % 10) + '0'); // Print units place
            }
            _putchar(',');
            _putchar(' ');
        }
        // Print 98 without a trailing comma
        _putchar('9');
        _putchar('8');
    } else {
        for (int i = n; i > 98; i--) {
            // Print the number
            if (i < 10) {
                _putchar(i + '0'); // Handle single digits
            } else {
                _putchar((i / 10) + '0'); // Print tens place
                _putchar((i % 10) + '0'); // Print units place
            }
            _putchar(',');
            _putchar(' ');
        }
        // Print 98 without a trailing comma
        _putchar('9');
        _putchar('8');
    }
    _putchar('\n'); // New line at the end
}
