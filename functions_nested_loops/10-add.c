#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * Void: nothing
 */
void print_to_98(int n) {
  int i;
    if (n <= 98) {
        for (i = n; i < 98; i++) {
            if (i < 10) {
                _putchar(i + '0');
            } else {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            _putchar(',');
            _putchar(' ');
        }
        _putchar('9');
        _putchar('8');
    } else {
        for (i = n; i > 98; i--) {
            if (i < 10) {
                _putchar(i + '0');
            } else {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            _putchar(',');
            _putchar(' ');
        }
        _putchar('9');
        _putchar('8');
    }
    _putchar('\n');
}
