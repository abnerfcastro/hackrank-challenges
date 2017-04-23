#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(const int);

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", factorial(n));
}

int factorial(const int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}