#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 *
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
if (*head == NULL)
return (0);

listint_t *popped = *head;
int content = popped->n;

*head = (*head)->next;
free(popped);
return (content);
}
