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
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
