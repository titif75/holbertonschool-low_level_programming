#include <stdio.h>
/**
* main - Prints single digit numbers using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
while (n < 10)
putchar(n++ + '0');
putchar('\n');
return (0);
}
