// Taylor series.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int fact(int n);

int main()
{
	float x;
	float err;

	printf("Enter the maximum permissible error: ");
	scanf_s("%f", &err);

	printf("Enter the value of x: ");
	scanf_s("%f", &x);

	int i, n = 1,a=1, j;
	float nerr, sin1 = 0, sin2 = 0;

	do {
		for (i = 1, j = 1; i <= n; i++, j += 2) {
			sin1 += (float) (a*pow(x, j)) / (fact(j));
			a = -a;
		}
		printf("%f", sin1);
		for (i = 1, j = 1, a = 1; i <= n+1; i++, j += 2) {
			sin2 += (float) (a*pow(x, j)) / (fact(j));
			a = -a;
		}
		printf("\n%f", sin2);
		
		if (sin1 > sin2)
			nerr = sin1 - sin2;
		else
			nerr = sin2 - sin1;

		printf("\n%f\n\n", nerr);

		++n;

	} while (nerr >= err);

	printf("The maximum no. of terms is %d", n);

    return 0;
}

int fact(int n) {
	int a = 1;

	if (n == 0 || n == 1)
		return (1);

	else
		for (; n > 0; --n)
			a *= n;

	return (a);
}
