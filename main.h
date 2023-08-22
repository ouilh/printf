#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/* Function prototypes */
int _putchar(char c);
int printchar(va_list args);
int printstring(va_list args);
int printpercent(va_list args);
int printint(int n);
int printinteger(va_list args);
int (*theprint(const char *format))(va_list);
int _printf(const char *format, ...);

/**
 * struct format - Represents a formatting specifier.
 *
 * @specf: Formatting specifier string.
 *
 * @function: Pointer to the function that processes data using the specifier.
 */
typedef struct formats
{
char *specf;
int (*function)(va_list);
} format_t;

#endif
