// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	
	int a[5][5] = { { 1,2,3,4,5 },
	{ 11,12,13,14,15 },{ 21,22,23,24,25 },
	{ 31,32,33,34,35 },{ 41,42,43,44,45 } };

	int z;
	int p, q;

	int (*ad) = &a;

	printf("%d is address of array a\n", ad);
	for (p = 0; p<5; p++)
	{
		for (q = p; q<5; q++)
		{
			z = *(*(a + q) + q);
			printf("%d", z);
		}
		printf("\n");
	}


    return 0;
}

