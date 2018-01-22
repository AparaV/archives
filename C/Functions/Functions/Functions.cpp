// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int minimum(int a, int b, int c);

int main(void)
{
	int x, y, z;

	printf("Enter three numbers: ");
	scanf_s("%d%d%d", &x, &y, &z);

	printf("%d", minimum(x, y, z));

	return 0;
}

int minimum(int a, int b, int c)
{
	int min = a;

	if (b <= min)
		min = b;

	if (c <= min)
		min = c;

	return min;
}



