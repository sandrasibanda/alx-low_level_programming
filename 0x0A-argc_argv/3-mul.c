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
	int arg1, arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
