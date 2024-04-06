#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascendig order
 * @array: array of numbers
 * @size: Nuenber of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp;

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
