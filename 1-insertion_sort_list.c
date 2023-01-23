#include "sort.h"

/**
 * insertion_sort_list - link list insertion algorithm
 * @list: node list head
 *
 * Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted_node, *unsorted_node, **head, *tmp;
	int to_sort;

	head = list;
	unsorted_node = (*head)->next;

	while(unsorted_node != NULL)
	{
		sorted_node = unsorted_node->prev;
		to_sort = unsorted_node->n;

		while(sorted_node->prev != NULL && sorted_node->n > to_sort)
		{
			tmp = sorted_node->next;
			tmp = sorted_node;
			sorted_node = tmp;

		}
	}


}











/**
 * insertion_sort_array - array insertion sort algorithm
 * @array: array of int
 * @size: size of the array
 *
 * Return: nothing
*/

void insertion_sort_array(int *array, int size)
{
	int sorted_index, unsorted_index, to_sort;

	for (unsorted_index = 1; unsorted_index < size; unsorted_index++)
	{
		sorted_index = unsorted_index - 1;
		to_sort = array[unsorted_index];

		while (sorted_index >= 0 && array[sorted_index] > to_sort)
		{
			array[sorted_index + 1] = array[sorted_index];
			/* consider array[sorted_index] empty now */
			sorted_index = sorted_index - 1;
		}
		array[sorted_index + 1] = to_sort;
	}
}
