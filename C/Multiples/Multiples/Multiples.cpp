// Multiples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int integer1; // The first number
	int integer2; // The second number
	int rem; // The remainder when the first number is divided by the second

	printf("\nThis program will tell you whether the first number is a multiple of the second\n");
	printf("===============================================================================\n");
	
	printf("\nEnter the first number:\n");
	scanf_s("%d", &integer1);
	
	printf("\nNow enter the second number:\n");
	scanf_s("%d", &integer2);
	
	rem = integer1 % integer2;

	if (rem == 0) {
		printf("The first number is a multiple of the second number\n");
	}
	if (rem != 0) {
		printf("The first number is not a multiple of the second number\n");
	}
    return 0;
}

