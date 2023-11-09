#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element found, or -1 if no element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL)
return (-1);

for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
