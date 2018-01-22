// Gas Mileage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	unsigned int counter;
	int miles;
	float gallons;
	int tmiles;
	float tgallons;
	float average;
	float oaverage;

	miles = counter = 0;
	gallons = tgallons = 0;
	tmiles = 0;

	printf("Enter the gallons used (-1 to end): ");
	scanf_s("%f", &gallons);

	while (gallons != -1) {
		counter = counter + 1;
		tgallons = tgallons + gallons;
		
		printf("Enter the miles driven: ");
		scanf_s("%d", &miles);
		tmiles = tmiles + miles;

		average = (float)miles / gallons;

		printf("The miles/gallon for this tank was %2.6f\n\n", average);

		printf("Enter the gallons used (-1 to end): ");
		scanf_s("%f", &gallons);
	}

	if (gallons == -1) {
		if (counter != 0) {
			oaverage = (float)tmiles / tgallons;
			printf("\n\nThe overall average miles/gallon was %2.6f", oaverage);
		}
		else {
			printf("\n\nNo data was entered!");
		}
	}
    return 0;
}

