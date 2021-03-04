//insertion sort
#include <stdio.h>

void insertion_sort(int *arr, int size)
{
	for (int i = 1; i < size; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;

			j--;
		}
	}
}

int main()
{
	int n[10] {33, 8, 5, 0, 2, 11, 59, 3, 29, 4};

	int size = sizeof(n) / sizeof(*n);

	insertion_sort(n, size);

	for (int k = 0; k < size; k++) {
		printf("%d ", n[k]);
	}
	printf("\n");
}