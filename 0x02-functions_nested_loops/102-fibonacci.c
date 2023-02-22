#include <stdio.h>

/**
 * main - print first 50 fibonacci
 * starting with 1 and 2
 * followed by a new line
 * Return: 0 always
 */

int main(void)
{
	
	long int x, y, z, number;

	y = 1;

	z = 2;

	for (x = 3; x <= 50; ++z)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		} else
		{
			printf("%ld\n", y);
		}
		number = y + z;
		y = z;
		z = number;
	}
	return (0);
}
