#include <unistd.h>
void _putchar(char c) {
write(1, &c, 1);
}
void print_array(int *a, int n) {
int i;
int num;
char str[10];
int j;
int temp;
int digits;
int k;
for (i = 0; i < n; i++) {
num = a[i];
if (num == 0) {
_putchar('0');
} 
else 
{
if (num < 0) {
_putchar('-');
num = -num;
}
temp = num;
digits = 0;
while (temp > 0) {
temp /= 10;
digits++;
}
for (k = digits - 1; k >= 0; k--) {
str[k] = (num % 10) + '0';
num /= 10;
}
for (k = 0; k < digits; k++) {
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
