#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - performs simple operations
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);
/* Check if the number of arguments is correct */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
/* Check if the operator is valid */
if (func == NULL)
{
printf("Error\n");
exit(99);
}
/* Check for division by zero */
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = func(num1, num2);
printf("%d\n", result);
return (0);
}
