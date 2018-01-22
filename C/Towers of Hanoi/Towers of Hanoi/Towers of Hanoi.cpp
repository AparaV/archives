// Towers of Hanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void towers(int n, int a, int b, int c);

int main()
{
	int n;
	int a, b, c;

	printf("Enter the number of disks: ");
	scanf_s("%d", &n);

	printf("Enter the names of the three towers: ");
	scanf_s("%d", &a);

	printf("Enter the names of the three towers: ");
	scanf_s("%d", &b);

	printf("Enter the names of the three towers: ");
	scanf_s("%d", &c);

	printf("\n\n");

	towers(n, a, b, c);

    return 0;
}

void towers(int n, int a, int b, int c) {

	if (n > 0) {
		
		towers(n - 1, a, c, b);
		printf("Move from %d to %d\n", a, c);

		towers(n - 1, b, a, c);
	}
}

