#include "main.h"
/**
* print_last_digit - return last digit
* @p :input  number to check
* Return: 0 or 1
*/
int print_last_digit(int p)
{
int n;
if (p < 0)
n = -1 * (p % 10);
else
n = p % 10;
_putchar((n % 10) + '0');
return (n % 10);
}
