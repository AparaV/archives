// bin to dec and dec to bin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"


int main()
{
	int bin, dec;
	int b[10], d;
	int i = 0, temp;

	printf("Enter a number: ");
	scanf("%d", &dec);

	while (dec != 0) {
		b[i] = dec % 2;
		dec = dec / 2;
		temp = i;
		++i;
	}

	for (i = temp; i >= 0; --i) {
		printf("%d ", b[i]);
	}

	d = 0;

	for (i = 0; i <=temp; ++i)
		d += b[i] * pow(2, i);

	printf("\nThe value is decimal is %d", d);

    return 0;
}

