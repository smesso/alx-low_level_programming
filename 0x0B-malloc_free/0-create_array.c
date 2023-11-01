#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with 'c'.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: If size is 0 or if malloc fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
