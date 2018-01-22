// Decimal to Binary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n, b;
	int x;
	int q, w, e, r, t;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	x = n;

	while (n >= 0) {
		q = x % 2;
		x = x / 2;
		if (x = 0) {
			printf("The binary number is %d", q);
			break;
		}
		else {
			w = x % 2;
			x = x / 2;
			if (x = 0) {
				printf("The binary number is %d%d", w, q);
				break;
			}
			else {
				e = x % 2;
				printf("the binary number is %d%d%d", e, w, q);
				break;
			}
		}
	}
	 
    return 0;
}

