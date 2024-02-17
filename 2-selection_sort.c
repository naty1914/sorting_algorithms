#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: Number of elements in the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_number;
int temp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min_number = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_number])
min_number = j;
}
if (min_number != i)
{
temp = array[i];
array[i] = array[min_number];
array[min_number] = temp;
print_array(array, size);
}
}

}

