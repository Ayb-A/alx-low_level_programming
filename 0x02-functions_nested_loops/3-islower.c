#include "main.h"
#include<unistd.h>

/**
* _islower - checks if character is lowercase
* @c: character to check
* Return: on success 1. Otherwise, 0 is returned
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
