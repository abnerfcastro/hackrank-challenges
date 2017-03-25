#include <stdio.h>

int main() {
    // Reads N
	int n; 
    scanf("%d", &n);
    
	// Reads Array
	int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%d", &arr[arr_i]);
    }

	int arr_sum = 0;
	for (int arr_i = 0; arr_i < n; arr_i++) {
		arr_sum += arr[arr_i];
	}

	printf("%d", arr_sum);

    return 0;
}