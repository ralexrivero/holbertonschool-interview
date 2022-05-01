#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert a number in sorted linked list
 *
 * @head: pointer to head of the list
 * @number: number to insert
 * Return: address of new node, NULL if it fail
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return(NULL);
	}
	new_node->n = number;
	new_node->next = NULL;

	if (head == NULL)
	{
		*head = new_node;
		return(*head);
	}
	return(*head);
}