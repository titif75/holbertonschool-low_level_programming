#include "main.h"
/**
* main - Programme principal pour tester 
*
* Return: 0 (succès)
*/
int main(void)
{
int r;
r = _islower('a');  // Test avec une lettre minuscule
_putchar(r + '0');  // Affiche 1 si c'est une minuscule
r = _islower('Z');  // Test avec une lettre majuscule
_putchar(r + '0');  // Affiche 0 si c'est une majuscule
r = _islower('c');  // Test avec une autre lettre minuscule
_putchar(r + '0');  // Affiche 1
return (0);
}
