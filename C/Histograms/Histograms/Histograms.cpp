// Histograms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a, b, c, d, e;

	printf("Enter first nuumber: ");
	scanf_s("%d", &a);
	for (; a > 0; --a) {
		printf("%s", "*");
		}
	puts("");

	printf("Enter second nuumber: ");
	scanf_s("%d", &b);
	for (; b > 0; --b) {
		printf("%s", "*");
	}
	puts("");

	printf("Enter third nuumber: ");
	scanf_s("%d", &c);
	for (; c > 0; --c) {
		printf("%s", "*");
	}
	puts("");

	printf("Enter fourth nuumber: ");
	scanf_s("%d", &d);
	for (; d > 0; --d) {
		printf("%s", "*");
	}
	puts("");

	printf("Enter fifth nuumber: ");
	scanf_s("%d", &e);
	for (; e > 0; --e) {
		printf("%s", "*");
	}
	puts("");

    return 0;
}

