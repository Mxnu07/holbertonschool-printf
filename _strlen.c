#include "main.h"
/**
 * _strlen - return the lenght of a string
 * @str: string pointer
 * Return: integer
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

		return (i);
}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @str: Type char pointer
 * Return: integer
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
