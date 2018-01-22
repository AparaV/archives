// Matrix Multiplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i, j, k;
	int m, n, p;

	printf("Enter the order of matrix A: ");
	scanf_s("%dx%d", &m, &n);

	int a[100][100];

	printf("Enter the order of matrix B: ");
	scanf_s("%dx%d", &n, &p);

	int b[100][100];

	printf("Enter the matrix A: ");
	for (i = 0; i < m; ++i)
		for (j = 0; j < n; ++j)
			scanf_s("%d", &a[i][j]);

	printf("Enter the matrix B: ");
	for (i = 0; i < n; ++i)
		for (j = 0; j < p; ++j)
			scanf_s("%d", &b[i][j]);

	int c[100][100];

	for (i = 0; i < m; ++i)
		for (j = 0; j < p ; ++j) {
			c[i][j] = 0;
			for (k = 0; k < n; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < p; ++j)
			printf("%d ", c[i][j]);
		printf("\n");
	}
	
    return 0;
}

