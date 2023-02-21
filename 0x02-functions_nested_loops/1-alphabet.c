#define _GNU_SOURCE
#include <stdio.h>
#include "main.h"

/**
 * main- The function prints the alphabet in lowercase followed by a new line
 * Return:Always 0 (Success)
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i=0;
	char c;
	while(i<10)
	{
		c = 'a';
	       while (c <= 'z') 
		{
		putchar(c);
		c++;
	}

	putchar('\n');
	i++;
	}
	return (0);
}
