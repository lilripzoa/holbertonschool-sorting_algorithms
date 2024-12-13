#include <stdio.h>
#include "sort.h"

/**
 * print_list_s - Prints a doubly linked list of integers.
 * @list: A pointer to the first node of the list.
 * Return: void.
 */
void print_list_s(listint_t *list)
{
	listint_t *temp = list;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		if (temp->next != NULL)
			printf(" ");
		temp = temp->next;
	}
	printf("\n");
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: A pointer to the first node of the doubly linked list.
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		next = current->next;

		while (prev != NULL && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;

			current->prev = prev->prev;
			if (prev->prev != NULL)
				prev->prev->next = current;

			prev->prev = current;
			current->next = prev;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
			prev = current->prev;
		}
		current = next;
	}
}
