// practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int max(int *a, int n)
{
	int m = *(a + n - 1);

	if (n == 0)
		return(*a);

	else
	{
		if (m > max(a, n - 1))
			return(m);

		else
			return(max(a, n - 1));
	}
}

int main()
{
	int a[10], i;

	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);

	printf("%d", max(a,10));

    return 0;
}

