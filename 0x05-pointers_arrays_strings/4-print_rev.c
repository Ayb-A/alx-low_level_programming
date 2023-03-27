#include "main.h"
/**
 * print_rev - print the str in reverse
 * @s: the string.
 * Return: Nothing.
 */
void print_rev(char *s)
{
int i = 0, len = 0;
while (s[i] != '\0')
{
len++;
i++;
}

while (len > -1)
{
_putchar(s[len]);
len--;
}
_putchar('\n');

}
