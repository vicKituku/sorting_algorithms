#include "sort.h"

void swap_elements(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if(array == NULL || size < 2)
		return;
	
	while(bubble == false)
	{
		bubble = true;
		for (i = 0; i < len-1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_elements(array+i, array+i+1);
				print_array(array,size);
				bubble = false;
			}
		}
		len--;
	}
}

