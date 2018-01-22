// Factorials from 1 to 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n, fact, i;

	fact = 1;
	printf("Number\tFactorial\n\n");

	for (i = 1; i <= 5; ++i) {
		n = i;
		while (n > 0) {
			fact = fact*n;
			--n;
		}
		printf("%d\t%d\n", i, fact);
		fact = 1;
	}
    return 0;
}

