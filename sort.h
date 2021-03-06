#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Given functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Task functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_dl_nodes(listint_t *node1, listint_t *node2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *array, int start, int end, size_t size);
int quick_sort_partition(int *array, int start, int end, size_t size);
void swap_ints(int *a, int *b);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
size_t dl_len(listint_t *h);

#endif
