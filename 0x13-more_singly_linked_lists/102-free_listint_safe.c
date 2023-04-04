#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	listint_t *node, *next;

	if (h == NULL || *h == NULL)
	return (0);

	node = *h;
	*h = NULL;  /* Set head to NULL */
	while (node != NULL)
	{
		count++;
		next = node->next;
		free(node);
		if (next >= node)
		break;
		node = next;
	}

	return (count);
}
