
#include "main.h"
#include <stdio.h> 

int _putchar(char c) {
   
    return write(1, &c, 1);
}

int printchar(va_list args) {
    int c = va_arg(args, int);
    return _putchar(c);
}

int printstring(va_list args) {
    char *str = va_arg(args, char*);
    int count = 0;
    while (*str != '\0') {
        count += _putchar(*str);
        str++;
    }
    return count;
}

int printpercent(va_list args) {
    return _putchar('%');
}

int printint(va_list args) {
    int num = va_arg(args, int);
    int count = 0;
   
    return count;
}

int printinteger(va_list args) {
    int num = va_arg(args, int);
    return printint(args);
}

int (*theprint(const char *format))(va_list) {
   
    return NULL;
}

int _printf(const char *format, ...) {
   
    return 0; 
}


