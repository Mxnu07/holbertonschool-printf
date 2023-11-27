#include "main.h"

/**
 * _printf - custom printf function
 * @format: identifier
 * Return: length
 */
int _printf(const char *format, ...)
{
    match m[] = {
        {"%c", printChar},
        {"%s", printStr},
        {"%%", print37},
        {"%d", print_d},
        {"%i", print_i}
    };

    va_list args;
    int i = 0;
    int length = 0;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    {
        va_end(args);
        return (-1);
    }

    while (format[i] != '\0')
    {
        int j;

        for (j = 0; j < 5; j++)
        {
            if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
            {
                length += m[j].f(args);
                break;
            }
        }

        if (j == 5)
        {
            _putchar(format[i]);
            length++;
        }

        i++;
    }

    va_end(args);
    return (length);
}
