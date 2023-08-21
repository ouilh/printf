#include "main.h"

/**
 * theprint - selects the function to use based on the given format specifier.
 *
 * @format: the format specifier character.
 * @args: a va_list of arguments for the selected function.
 *
 * Return: a pointer to the function corresponding to the format specifier.
 *         NULL if no matching function is found.
 */
int (*theprint(const char *format))(va_list args)
{
    int i = 0;

    format_t formats[] = {
        {"c", printchar},
        {"s", printstring},
        {"%", printpercent},
        {"d", printinteger},
        {"i", printinteger},
        {NULL, NULL}
    };

    for (; formats[i].specf != NULL; i++)
    {
        if (*format == *(formats[i].specf))
            return (formats[i].function);
    }

    return (NULL);
}
