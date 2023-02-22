#include <stdio.h>

/**
 * main -main block
 * print first 50 fibonacci starting with 1 and 2
 * numbers are separated by commas and space
 * followed by a new line
 * Return: 0 always
 */

int main(void)
{
	int count = 3;

	long int x = 1, y = 2;
	long int sum = x + y;

	printf("%lu, ", x);
	printf("%lu, ", y);

	while (count <= 50)
	{

    	    if (count == 50)
	{
		printf("%lu \n", sum);
	}
	else  
	{ 
		 printf("%lu, ", sum); 
	}

	x = y;
	y = sum;

	sum = x + y; 
	count++;
	}

	return (0);
}
