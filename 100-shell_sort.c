#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm,
 * using the Knuth sequence -> n+1 = n * 3 + 1
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void, nth
 */
void shell_sort(int *array, size_t size)
{
	int gap, i, j;
	int len, temp;

	if (array && size > 0)
	{
		len = size;
		gap = 1;
		while (gap < len)
			gap = (gap * 3) + 1;

		while (gap > 0)
		{
			for (i = 0; i < len - gap; i++)
				if (array[i] > array[i + gap])
				{
					temp = array[i];
					array[i] = array[i + gap];
					array[i + gap] = temp;
				for (j = i; j >= gap && array[j] < array[j - gap]; j += gap)
					{
						temp = array[j];
						array[j] = array[j - gap];
						array[j - gap] = temp;
					}
				}
			if (gap < len)
				print_array(array, len);
			gap = (gap - 1) / 3;
		}
	}
}
