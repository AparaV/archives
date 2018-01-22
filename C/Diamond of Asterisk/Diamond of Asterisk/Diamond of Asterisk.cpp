// Diamond of Asterisk.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n, x, i, a, j, y, b;

	printf("Enter an odd number from 1 to 19: ");
	scanf_s("%d", &n);

	if ((n % 2) != 0) {
		x = (n / 2);
		for (i = 0; i <= x; ++i) {
			a = x - i;
			for (; a > 0; --a) {
				printf(" ");
			}
			for (j = 1; j <= (2*i+1); j++) {
				printf("%s", "*");
			}
			puts("");
		}
		y = x;
		for (i = y; i > 0; --i) {
			a = y - i + 1;
			for (; a > 0; --a) {
				printf(" ");
			}
			for (j = (2*i - 1); j > 0; --j) {
				printf("%s", "*");
			}
			puts("");
		}
	}

	else {
		printf("Please enter an odd integer");
	}
    return 0;
}

