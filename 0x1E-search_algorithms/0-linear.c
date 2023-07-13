#include "search_algos.h"
/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag != 1)
		return (-1);
	return (i);
}
