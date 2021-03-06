#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a struct linked list
 *
 * @head: first element
 *
 * Return: frees a list_t list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
