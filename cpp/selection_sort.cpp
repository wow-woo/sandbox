//selection sort

#include <stdio.h>

void selection_sort(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		int min = 9999999;
		int idx;

		for (int j = i; j < size; j++) {
			if (min > arr[j]) {
				min = arr[j];
				idx = j;
			}
		}

		arr[idx] = arr[i];
		arr[i] = min;
	}
}

int main()
{
	int n[] = {1, 3, 8, 5, 9};

	int size = sizeof(n) / sizeof(*n);

	selection_sort(n, size);
}