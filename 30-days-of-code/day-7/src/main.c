#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int size;
	scanf("%d", &size);

	int array[size];
	for (int i = 0; i < size; i++)
		scanf("%d", &array[i]);
	
	for (int i = size - 1; i >= 0; i--)
	{
		printf("%d", array[i]);		
		// needs this so it won't print space at the end
		if (i > 0) printf(" ");
	}

	return 0;		
}