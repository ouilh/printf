#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int printchar(va_list args);
int printstring(va_list args);
int printpercent(va_list args);
int printint(va_list args);
int printinteger(va_list args);
int (*theprint(const char *format))(va_list);
int _printf(const char *format, ...);

typedef struct formats
{
    char *specf;
    int (*function)(va_list);
} format_t;

#endif

