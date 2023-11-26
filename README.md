# Holberton Printf Team Project

A formatted output conversion C program completed as part of the low-level
programming and algorithm track at Holberton School. The program is a pseudo-
recreation of the C standard library function, `printf`.

## Description

The function `print_f` writes output to standard output. The function writes
under the control of a `format` string that specifies how subsequent arguments
are converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon succesful return, `_printf` returns the number of character printed
(excluding the terminating null byte used to end output to strings). If an
output error is encountered, the function returns `-1`.

### Format of the Argument String

The format string argument is a constant character string composed of zero
or more directives. These directives consist of ordinary characters (not `%`),
which are copied unchanged to the output stream, and conversion specifications.
Each conversion specification starts with the `%`character and ends with a conversion specifier.
Between the `%` character and the conversion specifier, there may be (in order) zero or more flags,
an optional minimum field width, an optional precision, and an optional length modifier.
The arguments must correspond with the conversion specifier and are used in the specified order.

#### Conversion Specifiers

The conversion specifier (introduced by the character `%`) is a character that
specifies the type of conversion to be applied. The `_printf` function
supports the following conversion specifiers:

#### d, i
The `int` argument is converted to signed decimal notation.

Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:
```
7
```

#### b
The `unsigned int` argument is converted to signed decimal notation.

Example `main.c`:
```
int main(void)
{
    _printf("%b\n", 7);
}
```
Output:
```
111
```
#### c
The `int` argument is converted to an `unsigned char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

#### s
The `const char *` argument is expected to be a pointer to a character array
(aka. pointer to a string). Characters from the array are written starting
from the first element of the array and ending at, but not including, the
terminating null byte (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```
#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
