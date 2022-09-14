#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* Return : void
*/
void jack_bauer(void)
{
int Hr, Mn;
for (Hr = 0; Hr < 24; Hr++)
{
for (Mn = 0; Mn < 60; Mn++)
{
_putchar((Hr / 10) + '0');
_putchar((Hr % 10) + '0');
_putchar(':');
_putchar((Mn / 10) + '0');
_putchar((Mn % 10) + '0');
_putchar('\n');
}
}
}
