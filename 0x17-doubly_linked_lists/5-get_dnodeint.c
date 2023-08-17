#include "lists.h"
/**
* get_dnodeint_at_index -  returns the nth node of a linked list
* @head: the input pointer
* @index: the input space in index to get node
*
* Description: function to return the nth node of a dbl lnkd list
* Return: nth node or if node doesn't exist, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *amnth;
	unsigned int myindex = 0;

	amnth = head;

	while (amnth != NULL)
	{
		if (myindex == index)
			return (amnth);
		myindex++;
		amnth = amnth->next;
	}
	if (myindex == 0 || myindex < index)
		return (amnth);

	amnth = head;
	return (amnth->next);
}
