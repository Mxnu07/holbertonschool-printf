#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print37(void);
int printChar(va_list args);
int printStr(va_list args);
int _putchar(char c);


#endif