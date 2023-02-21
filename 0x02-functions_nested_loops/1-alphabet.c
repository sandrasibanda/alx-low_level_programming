#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *  * Return: Always 0(SUCCESS)
 *  
 */
void print_alphabet(void)
{
	char i='a';

	while (i<='z')
	{
		putchar(i);
		i++;
	}
		putchar('\n');
		return 0;
}
