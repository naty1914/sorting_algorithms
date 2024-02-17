#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node structure
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

int partition(int *array, size_t size, int start, int end);
void sort_partition(int *array, size_t size, int start, int end);
void quick_sort(int *array, size_t size);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif
