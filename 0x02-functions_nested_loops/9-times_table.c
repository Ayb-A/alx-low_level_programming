#include "main.h"
#include<unistd.h>

/**
* times_table - print times table from 0 to 9
*
*
*/
void times_table(void)
{
int res, i = 0, j = 0, first_digit, last_digit;
for (i = 0; i <= 9; i++)
{
_putchar(48);
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar('.');
res = i * j;
if (res <= 9)
{
_putchar('.');
_putchar(res + 48);
}
else
{
last_digit = res % 10;
first_digit = res;

while (first_digit >= 10)
first_digit /= 10;

_putchar(first_digit + 48);
_putchar(last_digit + 48);
}

}
_putchar('\n');
}
}
