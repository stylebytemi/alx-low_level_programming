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
int t, m;
for (t = '0'; t < '9'; t++)
for (m = t + 1; m <= '9'; m++)
{
if (m != t)
{
putchar(t);
putchar(m);
if (t == '8' && m == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
