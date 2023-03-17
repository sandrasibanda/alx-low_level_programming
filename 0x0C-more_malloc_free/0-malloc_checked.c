#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @x: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int x)
{
	char *p;

	p = malloc(x);
	if (p == NULL)
		exit(98);
	return (p);
}
