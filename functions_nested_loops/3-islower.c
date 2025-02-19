#include "main.h"
/**
* _islower - Fonction qui vérifie si un caractère est une minuscule.
* @c: caractère à vérifier.
*
* Return: 1 si le caractère est une minuscule, 0 sinon.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);  /* Caractère minuscule */
}
else
{
return (0);  /* Caractère non minuscule */
}
}
