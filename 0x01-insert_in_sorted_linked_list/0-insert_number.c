#include "lists.h"
/**
 * insert_node - insert a number in sorted linked list
 *
 * @head: pointer to head of the list
 * @number: number to insert
 * Return: address of new node, NULL if it fail
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *current, *header, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	if (*head == NULL) /* null list */
	{
		*head = new_node;
		return (*head);
	}
	header = *head; /* insert at the beginning */
	current = header;
	if (current->n >= number)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = *head;
		*head = new_node;
		header = *head;
		header->next = temp;
		return (*head);
	}
	else
	{
		header = *head;
		while (header != NULL)
		{
			current = header;
			if (header->next)
				header = header->next;
			if (header->n >= number)
			{
				new_node->next = header;
				current->next = new_node;
				return (*head);
			}
			else if (header->next == NULL) /* insert at end */
				current->next = new_node;

		}
	}
	return (*head);
}
