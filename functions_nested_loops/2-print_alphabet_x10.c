#include "main.h"
#include <unistd.h>

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
    write(1, "\n", 1);
}

void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        print_alphabet();
    }
}
