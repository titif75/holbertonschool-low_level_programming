#include <stdio.h>
/**
* main - Prints lowercase alphabet in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
putchar(letter--);
putchar('\n');
return (0);
}
