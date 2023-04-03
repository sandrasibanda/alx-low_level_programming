#include "main.h"
/**
*print_line - prints a straight line
*@i:parameter
*Return:returns nothing
*/
void print_line(int i)
{
	while (i-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
