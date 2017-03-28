#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	// Preset variables
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";

	// My variables
	int myInt;
	double myDouble;
	char* myString = malloc(256 * sizeof(char));

	// Reads values
	scanf("%d", &myInt);
	scanf("%lf", &myDouble);
	getchar(); fgets(myString, 256, stdin);

	char *concat = malloc(512 * sizeof(char));
	strcpy(concat, s);
	strcat(concat, myString);

	printf("%d\n", i + myInt);
	printf("%.1lf\n", d + myDouble);
	fputs(concat, stdout);	

	return 0;
}