// Asterisk.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i, j, x;

	for (i = 10; i > 0; --i) {

		x = 10 - i;
		for (; x > 0; --x) {
			printf(" ");
		}

		for (j = i; j > 0; --j) {
			printf("%s", "*");
		}

		printf("\n");

	}
    return 0;
}

