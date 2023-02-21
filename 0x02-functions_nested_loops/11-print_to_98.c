#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from i to 98
 *
 * @i: starting point
 *
 * Return: returns nothing
 *
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (i = i; i <= 97; i++)
			printf("%d, ", i);
	}
	else
		for (i = i; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
