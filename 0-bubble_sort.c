#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 *
 * Return: void, nth
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n = size, new_n;
	int temp;

	while (n > 1)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				new_n = i + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
