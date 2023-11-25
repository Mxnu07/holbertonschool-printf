#include "main.h"
#include <stdarg.h>
/**
* printStr - print string
* @args: argument pointer
* Return: num of parameters printed
*/
int printStr(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
