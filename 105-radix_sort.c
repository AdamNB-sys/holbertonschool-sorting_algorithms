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
 * radix_sort - implements the LSD Radix sort algorithm
 * @array: the array to be sorted
 * @size:  size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
size_t digits = 0, x, y, max, num, power;
int count[10];
int *sorted_array;

if (!array || size < 2)
return;
max = maxInt(array, size);
while (max > 0)
{
digits++;
max /= 10;
}
power = 1;
for (x = 0; x < digits; x++)
{
sorted_array = malloc(sizeof(int) * size);
for (y = 0; y < 10; y++)
{
count[y] = 0;
}
for (y = 0; y < size; y++)
{
num = (array[y] / power) % 10;
count[num]++;
}
for (y = 1; y < 10; y++)
{
count[y] += count[y - 1];
}
for (y = size - 1; (int)y >= 0; y--)
{
num = (array[y] / power) % 10;
sorted_array[count[num] - 1] = array[y];
count[num]--;
}
for (y = 0; y < size; y++)
{
array[y] = sorted_array[y];
}
power *= 10;
free(sorted_array);
print_array(array, size);
}
}
