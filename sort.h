#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

typedef enum bool
{
	false = 0,
	true
} bool;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
#endif /* SORT_H */
