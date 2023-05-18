#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print the elements in a list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t listSize = 0;

	if (h == NULL)
	return (listSize);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		listSize++;
		h = h->next;
	}

	return (listSize);
}
