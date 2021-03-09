#include <cmath>
#include <stdio.h>

int isPrimeNumber(int x)
{
	for (int i = 2; i < sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	printf("%d", isPrimeNumber(3));
}