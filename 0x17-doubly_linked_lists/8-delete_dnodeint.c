#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index
* @head: the input double poitner
* @index: the input index to where to delete
*
* Description: function that deletes the node at nth of a lnkd list
* Return: 1 (Success), -1 (Fail)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *amnt, *amnt2;
	unsigned int myindex = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		amnt = (*head)->next;
		amnt->prev = NULL;
		/*free(amnt);*/
		return (1);
	}
	amnt = *head;
	while (amnt != NULL)
	{
		if (myindex == index)
		{
			amnt2 = amnt->next;
			amnt2->prev = amnt->prev->prev;
			amnt = amnt2->prev;
			amnt->next = amnt2->next->next;
			/*free(amnt2);*/
			return (1);
		}
		amnt = amnt->next;
		myindex++;
	}
	if (myindex < index)
		return (-1);
	if (amnt->next == NULL)
		return (1);

	return (-1);
}
