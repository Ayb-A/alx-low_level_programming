#include "main.h"
#include<unistd.h>

/**
* jack_bauer - print time from 00:00 to 23:59
*
*
*/
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 3; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(i + 48);
_putchar(j + 48);
_putchar(':');
_putchar(k + 48);
_putchar(l + 48);
_putchar('\n');
}
}
}
}
}
