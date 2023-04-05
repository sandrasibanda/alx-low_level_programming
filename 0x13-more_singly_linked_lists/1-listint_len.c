#include "lists.h"


/**
 *listint_len - Returns the number of elements
 *in a linked listint_t list
 *@a: A pointer to the head of the list
 *
 *
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *a)
{
	size_t nodes = 0;

	while (a)
	{
		nodes++;
		a = a->next;
	}
	return (nodes);
}
