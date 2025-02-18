#include <stdio.h>
int main(void)
{
for (int i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');  // Print the comma
putchar(' ');  // Print the space
}
}
putchar('\n');
return 0;
}
