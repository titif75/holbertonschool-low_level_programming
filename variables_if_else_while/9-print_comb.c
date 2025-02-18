#include <stdio.h>
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0'); // Convert the integer to its ASCII character
if (i != 9) // Check if it's not the last number
{
putchar(','); // Print the comma
putchar(' '); // Print the space
}
}
putchar('\n'); // Print a newline at the end
return (0);
}
