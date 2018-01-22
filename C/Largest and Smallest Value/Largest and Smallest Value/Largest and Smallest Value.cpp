// Largest and Smallest Value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int integer1;
	int integer2;
	int integer3;
	int average;
	int sum;
	int product;
	int largest, smallest;

	printf("Enter three different integers: ");
	scanf_s("%d ", &integer1);
	scanf_s("%d ", &integer2);
	scanf_s("%d", &integer3);
	
	sum = integer1 + integer2 + integer3;
	average = sum / 3;
	product = integer1 * integer2 * integer3;

	printf("Sum is %d\nAverage is %d\nProduct is %d\n", sum, average, product);

	if (integer1 >= integer2 >= integer3) {
		printf("Smallest is %d\nLargest is %d", integer3, integer1);
	}
	else if (integer1 >= integer3 >= integer2) {
		printf("Smallest is %d\nLargest is %d", integer2, integer1);
	}
	else if (integer2 >= integer1 >= integer3) {
		printf("Smallest is %d\nLargest is %d", integer3, integer2);
	}
	else if (integer2 >= integer3 >= integer1) {
		printf("Smallest is %d\nLargest is %d", integer1, integer2);
	}
	else if (integer3 >= integer1 >= integer2) {
		printf("Smallest is %d\nLargest is %d", integer2, integer3);
	}
	else if (integer3 >= integer2 >= integer1) {
		printf("Smallest is %d\nLargest is %d", integer1, integer3);
	}
    return 0;
}

