#include "main.h"
/**
 *_isupper - a function that verifies if a char is uppercase or lowercase
 *@i: test character
 *Return: returns 1  if char is uppercase else 0
 */

int _isupper(int i)
	{
	if ((i >= 'A') && (i <= 'Z'))
	return (1);
	
	return (0);
	}	
