/* _putchar.c */
#include <unistd.h>

void _putchar(char c)
{
    write(1, &c, 1);
}
/* main.h */
#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);

#endif /* MAIN_H */
/* main.c */
#include "main.h"

int main(void)
{
    print_alphabet();
    return 0;
}
/* 1-alphabet.c */
#include "main.h"

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
