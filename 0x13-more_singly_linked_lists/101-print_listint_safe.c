#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 *                      safely (handles loops)
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *one_node = head, *two_nodes = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	for (; two_nodes && two_nodes->next; one_node = one_node->next, two_nodes = two_nodes->next->next)
	{
		printf("[%p] %d\n", (void *)one_node, one_node->n);
		count++;

		if (one_node == two_nodes)
		{
			one_node = head;
			for (; one_node != two_nodes; one_node = one_node->next, two_nodes = two_nodes->next)
			{
				printf("[%p] %d\n", (void *)one_node, one_node->n);
				count++;
			}
			printf("[%p] %d\n", (void *)one_node, one_node->n);
			count++;
			printf("-> [%p] %d\n", (void *)two_nodes, two_nodes->n);
			count++;
			return (count);
		}
	}

	for (; one_node; one_node = one_node->next)
	{
		printf("[%p] %d\n", (void *)one_node, one_node->n);
		count++;
	}

	return (count);
}
