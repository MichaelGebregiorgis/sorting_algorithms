#include "sort.h"

/**
 * swap_val - Swap integers
 * @a: Data type
 * @b: Data type
 */
void swap_val(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sort the array integers
 *
 * @array: Data type
 *
 * @size: Data type
 */
void bubble_sort(int *array, size_t size)
{
	size_t inc, length = size;
	bool bubb = false;

	if (!array || size < 2)
	{
		return;
	}
	while (bubb == false)
	{
		bubb = true;
		for (inc = 0; inc < length - 1; inc++)
		{
			if (array[inc] > array[inc + 1])
			{
				swap_val(array + inc, array + inc + 1);
				print_array(array, size);
				bubb = false;
			}
		}
		length--;
	}
}
