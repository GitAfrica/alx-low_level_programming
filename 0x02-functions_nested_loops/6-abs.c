#include "main.h"
/**
 * _abs - function that computes the absolute value of integer
 * @ab: integer input
 *
 * Return: 0
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
