#include <stdio.h>

int getPrimeNumbers(int *x)
{
	for (long long int i = 2; i < 100000; i++) {
		if (x[i] == 0)
			continue;

		for (long long int j = i * i; j < 100000; j += i) {
			x[j] = false;
		}
	}

	int count = 0;
	for (int i = 2; i < 100000; i++) {
		if (x[i] != 0) {
			printf("%lld ", x[i]);
			count++;
		}
	}

	return count;
}

int main()
{
	int x[100001];

	for (int i = 2; i < 100000; i++) {
		x[i] = i;
	}

	printf("%d", getPrimeNumbers(x));
}