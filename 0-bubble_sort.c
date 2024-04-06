#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array of numbers
 * @size: Number of elements in the array
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
