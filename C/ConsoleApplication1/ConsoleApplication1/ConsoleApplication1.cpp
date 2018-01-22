// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int integer1;
	int integer2;
	int product;

	printf("Enter First integer\n");
	scanf_s("%d", &integer1);

	printf("Enter Second Integer\n");
	scanf_s("%d", &integer2);

	product = integer1 * integer2;

	printf("Product is %d\n", product);

    return 0;
}

