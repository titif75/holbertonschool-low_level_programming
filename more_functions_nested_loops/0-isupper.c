#include <stdio.h>
#include <main.h>
/**
* main - fonction majuscule
*return : 0
*/
int _isupper(int c) 
{
if (c >= 'A' && c <= 'Z') {
return 1;  // c est une lettre majuscule
}
return 0;  // c n'est pas une lettre majuscule
}
int main() {
char c = 'A';
if (_isupper(c)) {
printf("%c est une lettre majuscule\n", c);
} else {
printf("%c n'est pas une lettre majuscule\n", c);
}
c = 'a';
if (_isupper(c)) {
printf("%c est une lettre majuscule\n", c);
} else {
printf("%c n'est pas une lettre majuscule\n", c);
}
return 0;
} 
