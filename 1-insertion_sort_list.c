#include "sort.h"
/**
 * insertion_sort_list - function that sorts
 * @list: sort for linkedlist
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list && (*list)->next)
	{
		for (node = (*list)->next; node; node = node->next)
		{
			while ((node->prev) && (node->prev->n > node->n))
				node = swap(node, list);
		}
	}
}
/**
 *swap - swap a node
 *@node: the node to swap
 *@list: linkdlist
 *Return: node
 */
listint_t *swap(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	print_list(*list);
	return (current);
}
