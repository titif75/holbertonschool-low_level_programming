#include "main.h"
/**
* is_prime_number - checks if a number is prime
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
/**
* check_prime - recursive helper function to check primality
* @n: number to check
* @i: current divisor to check
*
* Return: 1 if prime, 0 if not
*/
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}
