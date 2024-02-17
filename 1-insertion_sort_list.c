#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using the insertion sort algorithm
 * @list: A pointer to  to the head of a doubly-linked list of integers
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current_node, *new_node, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (current_node = (*list)->next; current_node != NULL; current_node = temp)
{
temp = current_node->next;
new_node = current_node->prev;
while (new_node != NULL && current_node->n < new_node->n)
{
current_node->prev = new_node->prev;
if (new_node->prev != NULL)
new_node->prev->next = current_node;
new_node->prev = current_node;
new_node->next = current_node->next;
if (current_node->next != NULL)
current_node->next->prev = new_node;
current_node->next = new_node;
if (current_node->prev != NULL)
current_node->prev->next = current_node;
else
*list = current_node;
print_list((const listint_t *)*list);
new_node = current_node->prev;
}

}
}

