#include "main.h"
/**
 * _puts - print the given string in the screen
 * @str: the string.
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
