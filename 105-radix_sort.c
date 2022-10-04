#include "sort.h"

/**
 * maxInt - finds the largest number in the array
 * @array: the array to scan
 * @size: size of the array
 * Return: max integer of array
 */
int maxInt(int *array, int size)
{
    int i;
    int max = array[0];

    for (i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return (max);
}

/**
 * Radix sort implements the LSD Radix sort algorithm
 * @array: the array to be sorted
 * @size:  size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
    int digits = 0, x, y, max, num, power;
    int count[10];
    int *sorted_array;

    if (array == NULL || size < 2)
        return;
    max = maxInt(array, size);
    while (max > 0)
    {
        digits++;
        max /= 10;
    }
}
