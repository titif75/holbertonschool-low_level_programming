#include "main.h"
/**
* _isdigit - la fonction qui vérifie les chiffres de (0 à 9)
* @c: le caractere à verifier
* Return: 1 si c est un chiffre, 0 si ce n'est pas un chiffre
*/
int _isdigit(int c)
{
if(c>= '0' && c<= '9')
return (1);
else
return (0);
}
