#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/*
* main entry point
* Description - prints lowercase alphabet to stdout
* Return 0
*/

void print_alphabet(void)
{
int i;
for(i=97;i<=122;i++)
{
_putchar(i);
}
_putchar('\n');
}
