#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int array2[] = {26, 94, 9, 44, 17, 88, 87, 35, 96, 67, 56, 11, 12, 30, 90, 99, 18, 75, 21, 69, 2, 39, 95, 45, 6, 24, 37, 92, 15, 82, 8};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);

	n = sizeof(array2) / sizeof(array2[0]);

    print_array(array2, n);
    printf("\n");
    bubble_sort(array2, n);
    printf("\n");
    print_array(array2, n);
    return (0);
}
