#include <array>
#include <iostream>
using namespace std;
#include "MergeSort.h"

void main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7, 8, 14, 2};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	PrintArray(arr, arr_size);

	MergeSort(arr, arr_size);

	printf("\nSorted array is \n");
	PrintArray(arr, arr_size);
}