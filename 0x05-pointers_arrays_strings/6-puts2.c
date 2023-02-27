#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: pointer to a string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
