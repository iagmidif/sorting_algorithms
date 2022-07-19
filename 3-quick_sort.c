#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: void, nth
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - a function that used for the quick sort
 * @array: array of integers
 * @start: the starting index of the partition to sort
 * @end: the ending indes of the partition to sort
 * @size: actual size of the array
 *
 * Return: void, nth
 */
void quick_sort_helper(int *array, int start, int end, size_t size)
{
	int pIndex;

	if (start < end)
	{
		pIndex = quick_sort_partition(array, start, end, size);
		quick_sort_helper(array, start, pIndex - 1, size);
		quick_sort_helper(array, pIndex + 1, end, size);
	}
}

/**
 * quick_sort_partition - helps with partitioning  an array
 * @array: the array to be partitioned
 * @start: start of the parent partition
 * @end: end of the parent partition
 * @size: actual size of the array
 *
 * Return: a new pivot
 */
int quick_sort_partition(int *array, int start, int end, size_t size)
{
	int pIndex, i, pivot = array[end];

	pIndex = start - 1;
	for (i = start; i < end; i++)
		if (array[i] < pivot)
		{
			++pIndex;
			swap_ints(&array[i], &array[pIndex]);
			if (i != pIndex)
				print_array(array, size);
		}
	++pIndex;
	swap_ints(&array[pIndex], &array[end]);
	if (pIndex != end)
		print_array(array, size);
	return (pIndex);
}

/**
 * swap_ints - swaps two integers in an array of integers
 * @a: address of the first int
 * @b: address of the second int
 *
 * Return: void, nth
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
