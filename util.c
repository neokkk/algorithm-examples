#ifndef __UTIL__
#define __UTIL__

#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define MIN(a, b) ((a > b) ? (b) : (a))
#define MAX(a, b) ((a > b) ? (a) : (b))

void swap(int *arr, int a, int b)
{
    int tmp;

    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

#endif