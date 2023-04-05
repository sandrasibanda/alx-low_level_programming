#include "lists.h"

/**
 * print_listint - prints all the elements of a linked listint_t
 * @a: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *a)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", a->n);
		a = a->next;
		count++;
	}
	return (count);
}
