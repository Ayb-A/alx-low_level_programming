#include "main.h"
#include<unistd.h>

/**
* print_last_digit - print the last digit of a num
* @n: number
* Return: the last digit of a giver num
*/
int print_last_digit(int n)
{
int res;
res = n % 10;
if (res < 0)
{
res *= (-1);
}
_putchar(res + '0');
return (res);
}
