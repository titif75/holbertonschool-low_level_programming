#include "main.h"
/**
* _isalpha - Vérifie si un caractère est une lettre
* @c: Le caractère à vérifier
* Return: 1 si c est une lettre, 0 sinon
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
return (0);
}
