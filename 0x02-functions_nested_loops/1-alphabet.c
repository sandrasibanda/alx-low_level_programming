#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *  * Return: Always0:SUCCESS
 *  
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		printf(let);
	}
		printf("\n");
}
