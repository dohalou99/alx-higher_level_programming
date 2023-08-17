#include "lists.h"
/**
* sum_dlistint -  returns the sum of all the data (n) of a linked list
* @head: the input pointer
*
* Description: function to return sum of all dat (n) in dbl list
* Return: sum of data or 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *amnth;
	int sumy = 0;

	if (head == NULL)
		return (0);

	amnth = head;
	while (amnth != NULL)
	{
		sumy += amnth->n;
		amnth = amnth->next;
	}
	return (sumy);
}
