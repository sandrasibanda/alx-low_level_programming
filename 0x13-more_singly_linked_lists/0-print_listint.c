#include "lists.h"

/**
 * print_listint - print all element of listint_t
 * @a: reference to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *a)
{
	size_t count = 0;

	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
		count++;
	}
	return (count);
}
