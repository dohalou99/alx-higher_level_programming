#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: the input double pointer
* @idx: index to where new node is added
* @n: the input data of new node
*
* Description: function to insert a new node at a given index
* Return: Address of new node or NULL if fail.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nNode, *amnth = *h;
	unsigned int toindex = 0;

	nNode = malloc(sizeof(dlistint_t));
	if (nNode == NULL)
		return (NULL);
	nNode->n = n;
	if (*h == NULL)
	{
		nNode->next = NULL;
		nNode->prev = NULL;
		*h = nNode;
		return (nNode);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (toindex < idx - 1)
	{
		if (amnth == NULL)
			return (NULL);
		amnth = amnth->next;
		toindex++;
	}
	if (amnth->next == NULL)
	{
		amnth->next = nNode;
		nNode->prev = amnth;
		nNode->next = NULL;
		return (nNode);
	}
	nNode->next = amnth->next;
	amnth->next = nNode;
	nNode->prev = amnth;
	nNode->next->prev = nNode;
	return (nNode);
}
