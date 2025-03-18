#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - Prints anything based on the format string.
* @format: List of types of arguments (c: char, i: int, f: float, s: char*).
*/
void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
char *sep = "";
char *s_arg;
char *str_to_print;
int i_arg;
char c_arg;
double f_arg;
va_start(args, format);
while (*p)
{
if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
{
switch (*p)
{
case 'c':
c_arg = va_arg(args, int);
printf("%s%c", sep, c_arg);
break;
case 'i':
i_arg = va_arg(args, int);
printf("%s%d", sep, i_arg);
break;
case 'f':
f_arg = va_arg(args, double);
printf("%s%f", sep, f_arg);
break;
case 's':
s_arg = va_arg(args, char *);
str_to_print = "(nil)";
if (s_arg != NULL)
str_to_print = s_arg;
printf("%s%s", sep, str_to_print);
break;
}
sep = ", ";
}
p++;
}
printf("\n");
va_end(args);
}
