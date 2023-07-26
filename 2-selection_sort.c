#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * @array: number list
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
    size_t i, idx, tmp;
    int swp;

    if (array == NULL || size < 2)
        return;
    i = 0;
    while (i < size - 1)
    {
        tmp = i;
        for (idx = i + 1; idx < size; idx++)
        {
            if (array[tmp] > array[idx])
            {
                tmp = idx;
            }
        }
        if (tmp != i)
        {
            swp = array[i];
            array[i] = array[tmp];
            array[tmp] = swp;
            print_array(array, size);
        }
        i++;
    }
}