#include "holberton.h"

/**
* conjugate - returns the conjugate of a given complex number.
* @c: structure complex
* Return: complex
*/

complex conjugate(complex c)
{
c.im *= -1;
return (c);
}
