#include "main.h"
#include <stdarg.h>
/**
* printChar - Print character
* @args: argument pointer
* Return: num of parameters printed
*/
int printChar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);

}
