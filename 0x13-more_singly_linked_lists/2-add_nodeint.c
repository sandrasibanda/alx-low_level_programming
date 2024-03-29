#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@a: the integer for the new node to contain
 *
 *Return: 0 or the address of the element
 */

listint_t *add_nodeint(listint_t **head, const int a)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->a = a
	new->next = *head;

	*head = new;

	return (new);
}
