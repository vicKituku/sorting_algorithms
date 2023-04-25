#include "sort.h"

void swap_elements(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int *array, size_t size, int left, int right)
{
	int *pivot, upper, lower;
	pivot = array+right;
	for(upper = lower=left; lower < right; lower++)
	{
		if (array[lower] < *pivot)
		{
			if (upper < lower)
			{
				swap_elements(array+lower, array + upper);
				print_array(array, size);
			}
			upper ++;
		}
	}
	if (array[upper] > *pivot)
	{
		swap_elements(array+upper, pivot);
		print_array(array, size);
	}
	return (upper);
}
 
void sort_partition(int *array, size_t size, int left, int right)
{
	int loc;
	if (right- left > 0)
	{
		loc = partition(array, size, left, right);
		sort_partition(array, size, left, loc-1);
		sort_partition(array, size, loc+1, right);
	}
}

void quick_sort(int *array, size_t size)
{
	if(array == NULL || size < 2)
		return;
	sort_partition(array, size, 0, size-1);
}


