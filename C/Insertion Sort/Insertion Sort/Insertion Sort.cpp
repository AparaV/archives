// Insertion Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n, a[5], i, j, temp;

	printf("Enter the size of array: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; ++i) {
		printf("Enter an element: ");
		scanf_s("%d", &a[i]);
	}

	for (i = 1; i < n; ++i) {
		temp = a[i];

		for (j = i - 1; j >= 0; --j) {
			if (a[j] > temp) {
				a[j + 1] = a[j];
			}
			else
				break;
		}

		a[j + 1] = temp;
	}

	for (i = 0; i < n; ++i)
		printf("%d ", a[i]);

    return 0;
}

