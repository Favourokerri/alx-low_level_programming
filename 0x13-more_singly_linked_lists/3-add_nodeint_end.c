#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node
 *
 * Return: If the function fails - NULL. else - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (*head);
}
