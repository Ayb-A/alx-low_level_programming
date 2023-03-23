#include "main.h"
#include<unistd.h>

/**
* print_sign - check the sign of a number
* @n: number to check
* Return:  1=positive number, 0= Zero, -1=negative number
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar('\n');
}
