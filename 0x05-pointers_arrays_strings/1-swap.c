#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two variables.
 * @a: first integer.
 * @b: second integer.
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
