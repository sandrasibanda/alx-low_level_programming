#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @a: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *a)
{
	const listint_t *cursor = a;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->a);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
