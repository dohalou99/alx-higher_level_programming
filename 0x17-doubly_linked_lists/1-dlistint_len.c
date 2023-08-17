#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked list
* @h: the input pointer to head node of list
*
* Description: function to return number of elements in a lnkd list
* Return: the input Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
