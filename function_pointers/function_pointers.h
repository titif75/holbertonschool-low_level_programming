#ifndef Function_pointers.h
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
#endif /* FUNCTION_POINTERS_H */
