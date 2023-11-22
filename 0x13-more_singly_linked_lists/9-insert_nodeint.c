#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specific index in a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current_node = *head;
listint_t *previous_node = NULL;
unsigned int i = 0;

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current_node != NULL && i < idx)
{
previous_node = current_node;
current_node = current_node->next;
i++;
}

if (i == idx)
{
previous_node->next = new_node;
new_node->next = current_node;
return (new_node);
}

free(new_node);
return (NULL);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
