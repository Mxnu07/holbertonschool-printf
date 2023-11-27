#include "main.h"
#include <stdarg.h>
/**
* printStr - print string
* @args: argument pointer
* Return: num of parameters printed
*/
int printStr(va_list args)
{
	int count;
	int len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (count = 0; count < len; count++)
			_putchar(str[count]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (count = 0; count < len; count++)
		_putchar(str[count]);
	return (len);
}
