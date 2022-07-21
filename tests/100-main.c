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
    int array2[] = {9, 59, 75, 20, 64, 84, 13, 65, 18, 42, 53, 35, 93, 73, 71, 92, 30, 17, 4, 31};
    int array3[] = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    
	printf("--------------------\n");

	n = sizeof(array2) / sizeof(array2[0]);

    print_array(array2, n);
    printf("\n");
    shell_sort(array2, n);
    printf("\n");
    print_array(array2, n);
	
	printf("--------------------\n");

	n = sizeof(array3) / sizeof(array3[0]);

    print_array(array3, n);
    printf("\n");
    shell_sort(array3, n);
    printf("\n");
    print_array(array3, n);
    return (0);
}
