#include "main.h"
/**
* _sqrt_check - helper function to find the square root
* @n: the number to find the square root of
* @i: the current divisor being tested
*
* Return: the square root of n, or -1 if it does not exist
*/
int _sqrt_check(int n, int i)
{
if (i * i > n) /* Si le carré de i dépasse n, pas de racine naturelle */
return (-1);
if (i * i == n) /* Si on trouve la racine carrée naturelle */
return (i);
return (_sqrt_check(n, i + 1)); /* Tester avec le prochain entier */
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
*
* Return: the natural square root of n, or -1 if it does not have one
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* Pas de racine carrée pour les nombres négatifs */
return (-1);
return (_sqrt_check(n, 0)); /* Appel initial avec i = 0 */
}
