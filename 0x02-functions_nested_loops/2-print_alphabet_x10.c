#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

/**
* print_alphabet_x10 - prints lowercase alphabet to stdout
* Return : on success 0
*/
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
