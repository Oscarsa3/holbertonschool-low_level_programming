#include "search_algos.h"
/**
  * linear_search - search a value in an array using Linear search algorithm
  * @array: array of integers
  * @size: size of array
  * @value: value to seach
  * Return: the first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t  i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (value);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
