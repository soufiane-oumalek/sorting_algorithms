#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending
 * @array: an array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, idx;
    int tmp;

    if (array == NULL || size < 2)
        return;
    
    i = 0;
    while (i < size - 1)
    {
        for (idx = 0; idx < size - i - 1; idx++)
        {
            if (array[idx] > array[idx + 1])
            {
                tmp = array[idx];
                array[idx] = array[idx + 1];
                array[idx + 1] = tmp;
                print_array(array, size);
            }
        }
        i++;
    }
}