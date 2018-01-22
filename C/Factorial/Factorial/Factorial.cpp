// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int fact;
	int n, x;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	fact = 1;
	x = n;

	if (n > 0) {
		for (; x >= 1; x--) {
			fact *= x;
		}
	}
	
	printf("The factorial of %d is %d", n, fact);

    return 0;
}

