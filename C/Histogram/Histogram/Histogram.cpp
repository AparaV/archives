// Histogram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
#define SIZE 10
{
	int array[SIZE] = { 5,10,13,15,21,23,0,3,33,25 };
	int size, i;

	printf("%s%13s%21s\n", "Element", "Value", "Histogram");

	for (size = 0; size < SIZE; ++size) {
		printf("%7d%13d             ", size, array[size]);

		for (i = 1; i <= array[size]; ++i) {
			printf("*");
		}
		puts("");
	}
    return 0;
}

