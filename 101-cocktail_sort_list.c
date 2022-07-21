#include "sort.h"

/**
 * swap_dl_nodes - swaps two nodes of a doubly linked list
 * @node1: the first node
 * @node2: the second node
 *
 * Return: void, nth
 */
void swap_dl_nodes(listint_t *node1, listint_t *node2)
{
	/* if node1 is not the head of the lsit */
	if (node1->prev)
		node1->prev->next = node2;
	/* if node2 is not the tail of the list */
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * dl_len - returns the length of a doubly linked list
 * @h: head of the list
 *
 * Return: the length of the doubly linked lisr
 */
size_t dl_len(listint_t *h)
{
	listint_t *temp = h;
	size_t len = 0;

	for (; temp; temp = temp->next)
		len++;
	return (len);
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers
 * in ascending oreder
 * using the Cocktail shaker sort
 * @list: double pointer to the head of the list
 *
 * Return: void, nth
 */
void cocktail_sort_list(listint_t **list)
{
	size_t size = 0, i;
	listint_t *h = NULL;
	int swapped = 0;

	if (list && *list)
	{
		h = *list, size = dl_len(h);
		do {
			swapped = 0;
			for (i = 1; i < size - 1; i++)
			{
				if (h->n > h->next->n)
				{
					swap_dl_nodes(h, h->next);
					print_list(*list);
					swapped = 1;
				}
				else
					h = h->next;
			}
			if (!swapped)
				break;
			swapped = 0;
			h = h->next;
			for (i = size - 1; i > 0; i--)
			{
				if (h->n < h->prev->n)
				{
					swap_dl_nodes(h->prev, h);
					if (i == 1)
						*list = h;
					print_list(*list);
					swapped = 1;
				}
				else
					h = h->prev;
			}
			h = *list;
		} while (swapped);
	}
}
