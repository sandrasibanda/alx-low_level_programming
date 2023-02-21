#include "main.h"
/**
 * print_sign - prints the sign of a numver
 *
 * @i: the int to check
 *
 * Return: 1 and prints + if i is greater than zero
 *
 * 0 and prints 0 if i is zero
 *
 * -1 and prints - if i is less than zero
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (i < 0)
	{
		_putchar('-');
	}
	return (-1);
}
