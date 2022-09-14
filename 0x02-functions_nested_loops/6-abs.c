#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @xy: integer input
 * Return: absolute value 
 */
int _abs(int xy)
{
return (xy * ((xy > 0) - (xy < 0)));
}
