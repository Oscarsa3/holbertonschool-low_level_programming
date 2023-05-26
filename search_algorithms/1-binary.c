#include "search_algos.h"
void print_array(const int *array, size_t size);
/**
  * binary_search - search value in a array using Binary search algorithm
  * @array: array of integers
  * @size: size of array
  * @value: value to search
  * Return: the index where value is located
  */
int binary_search(int *array, size_t size, int value)
{

	size_t x = 0, medio, y = size - 1;

	if (!array)
		return (-1);
	while (x < size)
	{
		printf("Searching in array: ");
		print_array(&array[x], y - x + 1);
		if (x > y)
			return (-1);
		medio = (x + y) / 2;
		if (array[medio] == value)
		{
			return (medio);
		}
		else
		{
			if (value < array[medio])
				y = medio - 1;
			else
				x = medio + 1;
		}

	}
	return (-1);
}

/**
  * print_array - Prints an array of integers
  * @array: The array to be printed
  * @size: Number of elements in @array
  */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
