#ifndef MAIN_H
#define MAIN_H
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
int _strlen(char *s);
void swap_int(int *a, int *b);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
void reset_to_98(int *n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
#include <stddef.h>
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void print_diagsums(int *a, int size);
void print_number(int n);
#endif /* MAIN_H */
