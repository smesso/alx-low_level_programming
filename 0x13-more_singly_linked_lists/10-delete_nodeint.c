#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *previous_node;
unsigned int i;

if (*head == NULL)
return (-1);

current_node = *head;
previous_node = NULL;

for (i = 0; current_node != NULL && i < index; i++)
{
previous_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL)
return (-1);

if (previous_node == NULL)
*head = current_node->next;
else
previous_node->next = current_node->next;

free(current_node);

return (1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
const listint_t *current_node = h;
size_t count = 0;

while (current_node != NULL)
{
count++;
current_node = current_node->next;
}

return (count);
}

