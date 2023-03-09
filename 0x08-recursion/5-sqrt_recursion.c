#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _sqrt_helper - is a recursive helper function
*
* @n: to check
* @i: to check
*
* Return: -1 fail
*
*/
int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (_sqrt_helper(n, i + 1));
}
}
