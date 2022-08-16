#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a lonked list
 * @h: The header
 *
 * Return: no of nodes of linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
