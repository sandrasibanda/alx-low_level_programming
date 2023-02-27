#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer to a string
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i, half;
	char =  My School;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	half = len / 2;

	while (half--)
	{
		My School = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = My School;
		i++;
	}
}
