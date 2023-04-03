#include "main.h"
/**
*_isdigit - function that verifies if a  character is a digit or not
*@i: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int i)
	{
		if ((i >= 48) && (i <= 57))
		return (1);

		return (0);
}
