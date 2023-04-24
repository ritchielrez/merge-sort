#define MERGE_SORT_IMPLEMETATION
#include "merge-sort.hpp"

#include <iostream>

int main()
{
    int arr[]{1, 8, 3, 9, 4, 5, 7};
    int size{sizeof(arr) / sizeof(arr[0])};

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
