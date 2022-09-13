#include "main.h"
/**
* print_sign - check numbers
* @n : numbers to check
* Return: 0 or 1
*/
int print_sign(int n)
{
int checkSign;
if (n > 0)
{
checkSign = 1;
_putchar('+');
}
else if (n == 0)
{
checkSign = 0;
_putchar('0');
}
else
{
checkSign = -1;
_putchar('-');
}
return (checkSign);
}
