#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

/**
* print_alphabet - prints lowercase alphabet to stdout
* Return : on success 0
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
