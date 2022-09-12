#include "sort.h"

/**
 * swap_element - helper function to swap two elements
 * @a: first element
 * @b: second element
 * Return: void
 */
void swap_element(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * heapify - convert array into sorted heap
 * @array: array to heap
 * @n: size of heap
 * @i: the root (largest) index
 * Return: void
 */
void heapify(int *array, int n, int i)
{
    /* Find the largest among the root, left, and right elements */
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && array[leftChild] > array[largest])
        largest = leftChild;

    if (rightChild < n && array[rightChild] > array[largest])
        largest = rightChild;

    /* if root (i) isn't the largest, swap and continue */
    if (largest != i)
    {
        swap_element(&array[i], &array[largest]);
        heapify(array, n, largest);
    }
}

/**
 * heap_sort - driver function to call heap sort on any array passed
 * @array: the array to be sorted
 * @n: size of the array
 * Return: void
 */
void heap_sort(int *array, int n)
{
    int i;
    /* make the max heap */
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(array, n, i);

    /* do the heap sort */
    for (i = n - 1; i >= 0; i--)
    {
        swap_element(&array[0], &array[i]);

        /* heapify the root element to get the largest at root again */
        heapify(array, i, 0);
    }
}


