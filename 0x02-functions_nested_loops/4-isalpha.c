#include "main.h"
#include<unistd.h>

/**
* _isalpha - checks if character is lowercase or uppercase char
* @c: character to check
* Return: on success 1. Otherwise, 0 is returned
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
