// binary search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[100];
	int x, n, i;

	printf("Enter size of array: ");
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		printf("enter an element: ");
		scanf("%d", &a[i]);
	}
	printf("Enter element to search: ");
	scanf("%d", &x);

	int begin = 0, end = n;

	for (i = (begin + end) / 2; begin <= end; i = (begin + end) / 2) {
		if (a[i] == x) {
			printf("Element found!");
			break;
		}

		if (a[i] > x)
			end = i - 1;

		if (a[i] < x)
			begin = i + 1;
	}

	if (begin > end)
		printf("Not found");

    return 0;
}

