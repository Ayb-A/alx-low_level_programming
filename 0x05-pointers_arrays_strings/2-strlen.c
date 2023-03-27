#include<stdio.h>
/**
 * _strlen - calculates the lenght of a string
 * @s: the given string.
 * Return: the number of chars.
 */
int _strlen(char *s)
{
int i = 0, len = 0;
while (s[i] != '\0')
{
len++;
i++;
}
return (len);
}
