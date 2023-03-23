#include "main.h"
#include<unistd.h>

/**
* _abs - check the absolute value of a number
* @n: number to check
* Return: the abs value of a giver num
*/
int _abs(int n)
{
int res;
if (n >= 0)
{
res = n;
}
else if (n < 0)
{
res = n * (-1);
}
return (res);
}
