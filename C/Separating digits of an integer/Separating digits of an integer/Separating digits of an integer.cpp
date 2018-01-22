// Separating digits of an integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int integer;
	int digit1, digit2, digit3, digit4, digit5;
	int rem1, rem2, rem3, rem4;

	printf("\nThis program will separate the digits of any five digit number\n");

	printf("\nEnter any five digit number:\n");
	scanf_s("%d", &integer);

	rem1 = integer % 10000;
	rem2 = rem1 % 1000;
	rem3 = rem2 % 100;
	rem4 = rem3 % 10;
	
	digit1 = integer / 10000;
	digit2 = rem1 / 1000;
	digit3 = rem2 / 100;
	digit4 = rem3 / 10;
	digit5 = rem4;

	printf("%d   %d   %d   %d   %d", digit1, digit2, digit3, digit4, digit5);

    return 0;
}

