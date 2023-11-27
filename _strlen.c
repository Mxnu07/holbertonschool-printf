#include "main.h"
/**
 * _strlen - return the lenght of a string
 * @str: string pointer
 * return: 1
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

		return (1);
}

/**
 * _strlen - Strlen function but applied for constant char pointer s
 * @str: Type char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
