#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", current->len, current->str);
}
count++;
current = current->next;
}

return (count);
}
