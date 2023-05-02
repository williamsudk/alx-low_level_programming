#include "lists.h"

/**
 * sum_listint - To calculate the sum of all the data in a listint_t list
 * @head: Parameter for first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
