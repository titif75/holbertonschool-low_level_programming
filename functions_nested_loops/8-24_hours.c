#include <stdio.h>
void jack_bauer(void)
{
int heure, minute;
for (heure = 0; heure < 24; heure++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", heure, minute);
}
}
}
int main(void)
{
jack_bauer();
return 0;
}
