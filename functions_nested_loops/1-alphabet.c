#include <stdio.h>
#include <main.h>
#include <unistd.h>
void _putchar(char c)
{
write(1, &c, 1);
}
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
