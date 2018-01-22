// Pythagorean Triples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a, b, c, n;

	n = 0;
	
	for (a = 1; a <= 500; ++a) {
		for (b = 1; b <= 500; ++b) {
			for (c = 1; c <= 500; ++c) {
				if ((a*a) + (b*b) == (c*c)) {
					printf("Pythagorean triples: %d, %d, %d\n", a, b, c);
					++n;
				}
				if ((c*c) + (b*b) == (a*a)) {
					printf("Pythagorean triples: %d, %d, %d\n", b, c, a);
					++n;
				}
				if ((a*a) + (c*c) == (b*b)) {
					printf("Pythagorean triples: %d, %d, %d\n", c, a, b);
					++n;
				}
			}
		}
	}

	printf("The total number is %d", n);
    return 0;
}

