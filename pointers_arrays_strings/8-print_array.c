#include <unistd.h>

void _putchar(char c)
{
write(1, &c, 1);
}
void print_array(int *a, int n)
{
int i;
int num;
for (i = 0; i < n; i++)
{
num = a[i];
if (num == 0)
{
_putchar('0');
}
else
{
if (num < 0)
{
_putchar('-');
num = -num;
}
int divisor = 1;
while (num / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar((num / divisor) + '0');
num %= divisor;
divisor /= 10;
}
}
if (i < n - 1) 
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
