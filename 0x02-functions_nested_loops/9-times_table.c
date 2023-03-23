#include "main.h"
#include<unistd.h>

/**
* times_table - print times table from 0 to 9
*
*
*/
void times_table(void)
{
int res, i, j, first_digit, last_digit;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
res = i * j;
if (res <= 9)
_putchar(res + 48);
else
{
last_digit = res % 10;
first_digit = res;

while (first_digit >= 10)
first_digit /= 10;

_putchar(first_digit + 48);
_putchar(last_digit + 48);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
