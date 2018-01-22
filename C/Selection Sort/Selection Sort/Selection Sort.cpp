// Selection Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int n, i, j, a[100];

	printf("Enter the size of array: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; ++i) {
		printf("Enter an element: ");
		scanf_s("%d", &a[i]);
	}

	//Sorting
	int max, pmax, temp;

	for (i = n-1; i >=0 ; --i) {
		max = a[0];
		pmax = 0;

		//Finding max
		for (j = 1; j < i+1; ++j) {
			if (a[j] > max) {
				max = a[j];
				pmax = j;
			}
		}
		
		//Swapping
		temp = a[i];
		a[i] = max;
		a[pmax] = temp;

	}

	for (i = 0; i < n; ++i)
		printf("%d ", a[i]);
	
    return 0;
}

