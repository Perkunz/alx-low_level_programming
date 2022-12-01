#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head of a list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *cursor;

	while ((cursor = head) != NULL)
	{
		head = head->next;
		free(cursor);
	}
}
