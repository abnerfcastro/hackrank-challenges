#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double apply_readjustment(double price, int rate) {
	return price * (rate / 100.0);
}

int main() {
	double price;
	int tip, tax;

	scanf("%lf", &price);
	scanf("%d", &tip);
	scanf("%d", &tax);	

	double cost = price + apply_readjustment(price, tip) + apply_readjustment(price, tax);

	printf("The total meal cost is %d dollars.", (int) round(cost));
}