#include <unistd.h>

void _putchar(char c) 
{
write(1, &c, 1);
}
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
int num = a[i];
char str[10];
int j = 0;
if (num == 0) 
{
_putchar('0');
}
else
{
if (num < 0) {
_putchar('-');
num = -num;
}
int temp = num;
int digits = 0;
while (temp > 0) {
temp /= 10;
digits++;
}
for (int k = digits - 1; k >= 0; k--) {
str[k] = (num % 10) + '0';
num /= 10;
}
for (int k = 0; k < digits; k++) {
_putchar(str[k]);
}
}
if (i < n - 1) {
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
