#include "sort.h"

int swap(int *a, int *b);

/**
 * bubble_sort - bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t index_1, index_2;
	int swapped;

	if (size < 2)
		return;

	index_1 = 0;

	while (array != NULL && size > 2 && index_1 < size)
	{
		index_2 = 0;

		while (index_2 < (size - 1))
		{
			if (array[index_2] > array[index_2 + 1])
			{
				swapped = swap(&array[index_2], &array[index_2 + 1]);
				print_array(array, size);
			}

			index_2++;
		}

		if (swapped == 0)
			printf("%d", swapped);

		index_1++;
	}
}

/**
 * swap - swap two integer
 * @a: firt integer
 * @b: second integer
 *
 * Return: nothing
*/

int swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	return (1);
}
