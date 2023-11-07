#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * This function frees the memory allocated
 * for the owner, name, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
