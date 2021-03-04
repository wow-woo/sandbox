#include <stdio.h>

void bubble_sort(int *arr, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n[5] {98, 3, 8, 9, 11};

	int size = sizeof(n) / sizeof(*n);

	bubble_sort(n, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", n[i]);
	}
}