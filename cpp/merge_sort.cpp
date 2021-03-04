//merge sort

#include <stdio.h>

int copy[5];

void merge(int *arr, int s, int mid, int e)
{
	int i = s;
	int j = mid + 1;
	int k = s;

	while (i <= mid && j <= e) {
		if (arr[i] <= arr[j]) {
			copy[k] = arr[i];
			i++;
		} else {
			copy[k] = arr[j];
			j++;
		}
		k++;
	}

	if (i > mid) {
		while (j <= e) {
			copy[k] = arr[j];
			k++;
			j++;
		}
	} else {
		// if (j > e) {
		while (i <= mid) {
			copy[k] = arr[i];
			k++;
			i++;
		}
	}

	for (int i = s; i <= e; i++) {
		arr[i] = copy[i];
	}
}

void merge_sort(int *arr, int size, int s, int e)
{
	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2;

	merge_sort(arr, size, s, mid);
	merge_sort(arr, size, mid + 1, e);

	merge(arr, s, mid, e);
}

int main()
{
	int n[5] {11, 3, 55, 8, 9};

	int size = sizeof(n) / sizeof(*n);

	merge_sort(n, size, 0, size - 1);

	for (int i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
}