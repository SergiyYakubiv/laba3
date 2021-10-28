#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_diff(const int* arr1, size_t n1, const int* arr2, size_t n2, int* arr3)
{
    int b;
    for (int i = 0, n = 0; i < n1; ++i)
    {
        b = 1;
        for (int j = 0; j < n2; ++j)
        {
            if (arr1[i] == arr2[j])
                b = 0;
        }
        if (b)
        {
            arr3[n] = arr1[i];
            ++n;
        }
    }
}

void main()
{
    const int n1 = 4, n2 = 4, n3 = 4;
    int arr1[4] = { 0,89,4,6 };
    int arr2[4] = { 5,55,4,7 };
    int arr3[4];
    array_diff(arr1, n1, arr2, n2, arr3);
    for (int i = 0; i < n3; ++i)
        printf("%d\n", arr3[i]);
};
