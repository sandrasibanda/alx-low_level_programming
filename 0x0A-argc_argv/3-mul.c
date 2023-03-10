#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: multiplies two numbers
 *
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0 and result when successful, 1 and Error when parameters are  not met
 */

int main(int argc, char *argv[])
{
	int  a = argc - 1, b = a - 1, res;

	if (a == 2)
	{
		res = atoi(argv[a]) * atoi(argv[b]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
