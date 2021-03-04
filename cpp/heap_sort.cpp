// heap sort
#include <stdio.h>

// int heap[10] = {23, 49, 11, 309, 8, 0, 3, 5, 33, 22};
int heap[10] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main()
{
	for (int i = 1; i < 10; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;

			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}

			c = root;
		} while (c != 0);
	}

	for (int i = 9; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = heap[0];

		int root = 0;
		int c = 1;
		do {
			c = root * 2 + 1;

			if (c < i - 1 && heap[c] < heap[c + 1]) {
				c++;
			}

			if (c < i && heap[root] < heap[c]) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}

			root = c;
		} while (c < i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", heap[i]);
	}
}