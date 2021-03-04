//quick sort
#include <stdio.h>

void quick_sort(int *arr, int s, int e)
{
	if (s >= e) {
		return;
	}

	int pivot = s;
	int l = pivot + 1;
	int r = e;

	while (l <= r) {
		while (l <= e && arr[pivot] >= arr[l]) {
			l++;
		}

		while (r > s && arr[pivot] <= arr[r]) {
			r--;
		}

		if (l > r) {
			int temp = arr[pivot];
			arr[pivot] = arr[r];
			arr[r] = temp;
		} else if (r > l) {
			int temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
		}
	}

	quick_sort(arr, s, r - 1);
	quick_sort(arr, r + 1, e);
}

int main()
{
	int n[5] {33, 9, 11, 3, 5};

	int size = sizeof(n) / sizeof(*n);

	quick_sort(n, 0, size - 1);

	for (int item : n) {
		printf("%d ", item);
	}
}