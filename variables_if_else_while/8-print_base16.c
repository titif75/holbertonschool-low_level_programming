#include <stdio.h>
/**
* main - Prints all hexadecimal numbers in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
char digit = '0';
while (digit <= '9')
putchar(digit++);
digit = 'a';
while (digit <= 'f')
putchar(digit++);
putchar('\n');
return (0);
}
