#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array of file
 * @size: size of the array
 *
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int x, y, tmp;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;

				print_array(array, size);
			}
		}
	}

}
