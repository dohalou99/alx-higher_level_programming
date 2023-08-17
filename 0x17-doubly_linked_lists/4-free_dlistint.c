#include "lists.h"
/**
* free_dlistint - function that frees a dlistint_t list
* @head: the input pointer
*
* Decription: function to free a a dbl lnkd list
* Return: always 0 (success)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *amnth = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		amnth = head;
		head = head->next;
		free(amnth);
	}
	free(head);
}
