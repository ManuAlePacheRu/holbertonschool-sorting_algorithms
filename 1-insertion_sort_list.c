#include "sort.h"

/**
* swap - Swaps the nodes
* @left: left node
* @right: right node
* @head: Head of list
*/

void swap(listint_t *left, listint_t *right, listint_t **head)
{
	listint_t *aux;

	aux = left->prev;
	if (aux)
		aux->next = right;
	right->prev = aux;
	left->prev = right;
	left->next = right->next;
	right->next = left;
	if (left->next != NULL)
		left->next->prev = left;
	if (right->prev == NULL)
		*head = right;
	print_list(*head);
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
* @list: Head of list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *next, *prev, *prev_2;

	if (list == NULL)
		return;

	 actual = next = *list;
	while (actual != NULL)
	{
		while (actual->prev != NULL)
		{
			prev = actual->prev;
			prev_2 = prev;
			if (prev->n > actual->n)
				swap(prev, actual, list);
			actual = prev_2;
		}
		actual = next->next;
		next = actual;
	}

}
