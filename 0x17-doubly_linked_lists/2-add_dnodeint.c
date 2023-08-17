#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a list
* @head: the input double pointer
* @n: the input new node data to be added
*
* Description: function to add new node to beginning of dbl lnkd list
* Return: the input Address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nNode;
	int number = n;

	nNode = malloc(sizeof(dlistint_t));

	if (nNode == NULL)
		return (NULL);
	nNode->n = number;
	nNode->next = *head;
	nNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = nNode;

	*head = nNode;
	return (nNode);
}
