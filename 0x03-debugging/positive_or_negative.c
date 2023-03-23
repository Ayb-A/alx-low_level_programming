#include<stdio.h>
/**
 * positive_or_negative - see if a number is pos, neg, or 0
 *@i: the number
 *Return: void
 */
void positive_or_negative(int i)
{
if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
