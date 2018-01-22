// Relation between two numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num1, num2;

	printf("This program shall tell you the relation between any two numbers\n");
	
	printf("Enter the first number\n");
	scanf_s("%d", &num1);

	printf("Enter the second number\n");
	scanf_s("%d", &num2);

	if (num1 == num2) {
		printf("%d is equal to %d\n", num1, num2);
	}

	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	}

	if (num1 < num2) {
		printf("%d is lesser than %d\n", num1, num2);
	}

	if (num1 > num2) {
		printf("%d is greater than %d", num1, num2);
	}
	
    return 0;
}

