#include "lists.h"

/**
 * _is_palindrome - checks if a singly linked list is a palindrome (helper)
 * @head: the input pointer
 *
 * Return: 1 if the list is a palindrome, if it is not 0
 */
int _is_palindrome(listint_t **head, listint_t *tail)
{
	int status = 1;

	if (tail)
	{
		status = _is_palindrome(head, tail->next);

		if (tail == *head || tail->next == *head)
			*head = tail;
		else if (status && (*head)->n == tail->n)
			*head = (*head)->next;
		else
			status = 0;
	}
	return (status);
}


/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: the input pointer
 *
 * Return: 1 if the list is a palindrome, if it is not 0
 */
int is_palindrome(listint_t **head)
{
	return (head && _is_palindrome(head, *head));
}
