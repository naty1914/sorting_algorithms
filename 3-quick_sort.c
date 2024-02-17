#include "sort.h"

/**
 * sort_partition - Sorts a partition of an array using Lomuto partition
 * recursively using the quicksort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 * @start: The starting index of the partition to be sorted
 * @end: The ending index of the partition to be sorted
 */
void sort_partition(int *array, size_t size, int start, int end)
{
if (end - start > 0)
{
int part = partition(array, size, start, end);
sort_partition(array, size, start, part - 1);
sort_partition(array, size, part + 1, end);
}
}
/**
 * partition - Lomuto partition scheme of an array into two sub-arrays
 * @array: The array to be partitioned
 * @size: Number of elements in the array
 * @start: The starting index of the sub-array to partition
 * @end: The ending index of the sub-array to partition
 * Return: Index of the pivot element after partitioning
 */
int partition(int *array, size_t size, int start, int end)
{
int pivot = array[end];
int small_index = start - 1;
int i, temp;
for (i = start; i < end; i++)
{
if (array[i] < pivot)
{
small_index++;
if (small_index != i)
{
temp = array[small_index];
array[small_index] = array[i];
array[i] = temp;
print_array(array, size);
}
}
}
if (array[small_index + 1] != array[end])
{
int temp = array[small_index + 1];
array[small_index + 1] = array[end];
array[end] = temp;
print_array(array, size);
}
return (small_index + 1);
}
/**
 * quick_sort - Sorts an array of integers in
 * ascending order using the quicksort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 * Return: Void
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
sort_partition(array, size, 0, size - 1);
}
