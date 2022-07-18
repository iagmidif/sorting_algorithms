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
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double pointer a node in the list
 *
 * Return: void nth
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h = *list, *temp = NULL;

	if (h)
	{
		while (h->next)
		{
			if (h->n > h->next->n)
			{
				if (*list == h)
					*list = h->next;
				swap_dl_nodes(h, h->next);
				print_list(*list);
				temp = h->prev;
				while (temp->prev && temp->n < temp->prev->n)
				{
					if (*list == temp->prev)
						*list = temp;
					swap_dl_nodes(temp->prev, temp);
					print_list(*list);
				}
			}
			else
				h = h->next;
		}
	}
}
