#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct format
{
char *id;
int (*f)();
} match;

int _printf(const char *format, ...);
int printChar(va_list args);
int printStr(va_list args);
int _putchar(char c);
int _strlen(char *str);
int _strlenc(const char *str);
int print_i(va_list args);
int print_d(va_list args);
int print37(void);

#endif
