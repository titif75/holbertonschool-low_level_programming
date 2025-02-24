#include "main.h"
/**
* _isupper - vérifie si un caractère est une lettre majuscule
* @c: Le caractère à vérifier
* Return: 1 si c est une lettre majuscule, sinon 0
*/
int _isupper(int c) /*decription de la fonction*/
{
if (c >= 'A' && c <= 'Z')
return (1); /*c est une lettre majuscule*/
else
return (0); /*c n'est pas une lettre majuscule*/
}
