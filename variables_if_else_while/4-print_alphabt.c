#include <stdio.h>
/**
* main - Prints alphabet in lowercase except q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
