// sorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[100];
	int i, n, j, temp, pi, end, max;

	printf("Enter size of array: ");
	scanf("%d", &n);

	end = n;

	for (i = 0; i < n; ++i) {
		printf("Enter element: ");
		scanf("%d", &a[i]);
	}

	//bubble sort
	/*for (i = 0; i < n; ++i) {
		for (j = 0; j < n-1-i; ++j) {
			if (a[j] > a[j+1]) {
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}*/

	//selection sort
	/*for (i = n-1; i >= 0; --i) {
		max = a[0];
		pi = 0;
		end = i;
		for (j = 0; j <= end; ++j)
			if (a[j] > max) {
				max = a[j];
				pi = j;
			}

		temp = a[end];
		a[end] = max;
		a[pi] = temp;
	}*/

	//insertion sort
	for (i = 1; i < n; ++i) {
		temp = a[i];
		for (j = i-1; j >= 0; --j) {
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

