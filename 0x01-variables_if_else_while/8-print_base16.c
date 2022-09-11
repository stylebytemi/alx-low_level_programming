#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
char basse;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (basse = 'a'; basse <= 'f'; basse++)
putchar(basse);
putchar('\n');
return (0);
}
