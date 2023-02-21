#include <stdio.h>
/**
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
	
}
