// Averaging.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int sum, int1, avg, counter;

	counter = 0;

	printf("Enter an integer (9999 to end): ");
	scanf_s("%d", &int1);

	sum = int1;

	while (int1 != 9999) {
		printf("Enter an integer (9999 to end): ");
		scanf_s("%d", &int1);
		if (int1 == 9999)
			break;
		sum += int1;
		++counter;
	}

	if (counter != 0) {
		avg = sum / (counter + 1);
		printf("The average is %d", avg);
	}
	else if (counter = 0)
		printf("No values were entered!");
	
    return 0;
}

