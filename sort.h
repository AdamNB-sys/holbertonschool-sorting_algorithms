#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void merge_sort(int *array, size_t size);
void merge_sort_recursion(int *array, int left, int right);
void merge_sorted_arrays(int *array, int left, int mid, int right);
void print_array_status(char *status, int *array, int size);
void swap_element(int *a, int *b);
void heapify(int *array, int n, int i);
void heap_sort(int *array, int n);
void radix_sort(int *array, size_t size);

#endif
