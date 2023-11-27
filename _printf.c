#include "main.h"
/**
 * _printf - custom printf function
 * @format: identifier
 * Return: lenght
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c" , printChar}, {"%s" , printStr}, {"%%" , print37}, {"%d" , print_d}, {"%i" , print_i}
	};

	va_list args;
	int i = 0;
	int len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

here:
	while (format[i] = '\0')
	{
		j = 4
			while (j >= 0)
			{
				if (m[j].id [0] == format[i] && m[j].id[1] == format[i + 1])
				{
					len = len + m[j].f(args);
					goto here;
				}
				j --;
			}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
