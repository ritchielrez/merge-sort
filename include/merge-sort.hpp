#ifndef MERGE_SORT_INCLUDED
#define MERGE_SORT_INCLUDED
#include <cctype>
#include <memory>

void merge(int arr[], int l, int m, int r);
void mergesort(int arr[], int l, int r);

#endif // MERGE_SORT_INCLUDED

#ifdef MERGE_SORT_IMPLEMETATION

void merge(int arr[], int l, int m, int r)
{
    // Size of the left and the right subarray
    int subArrSize1{m - l + 1};
    int subArrSize2{r - m};

    // Index of the inital indexes of subarrays and the main array
    int indexSubArr1{0}, indexSubArr2{0}, indexMergedArray{l};

    // Allocate the left and the right subarray in heap
    std::unique_ptr<int[]> subArr1{new int[subArrSize1]};
    std::unique_ptr<int[]> subArr2{new int[subArrSize2]};

    for (int i = 0; i < subArrSize1; ++i)
        subArr1[i] = arr[l + i];
    for (int i = 0; i < subArrSize2; ++i)
        subArr2[i] = arr[m + 1 + i];

    while (indexSubArr1 < subArrSize1 && indexSubArr2 < subArrSize2)
    {
        if (subArr1[indexSubArr1] <= subArr2[indexSubArr2])
        {
            arr[indexMergedArray] = subArr1[indexSubArr1];
            ++indexSubArr1;
        }
        else
        {
            arr[indexMergedArray] = subArr2[indexSubArr2];
            ++indexSubArr2;
        }
        ++indexMergedArray;
    }

    while (indexSubArr1 < subArrSize1)
    {
        arr[indexMergedArray] = subArr1[indexSubArr1];
        ++indexSubArr1;
        ++indexMergedArray;
    }
    while (indexSubArr2 < subArrSize2)
    {
        arr[indexMergedArray] = subArr2[indexSubArr2];
        ++indexSubArr2;
        ++indexMergedArray;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }

    int m{(l + r) / 2};
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    merge(arr, l, m, r);
}

#endif // MERGE_SORT_IMPLEMETATION
