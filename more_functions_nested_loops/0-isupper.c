#include <main.h>
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return 1;  // c est une lettre majuscule
else
return 0;  // c n'est pas une lettre majuscule
} 
