// Ass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"


int main()
{
	int flag = 0;
	int thousands, hundreds, cents;
	float amount;


	printf("If the check amount is lesser than $1,000 enter 1\nOtherwise enter 2\n");
	scanf("%d", &flag);

	if (flag == 1) {
		thousands = 0;

		printf("\nEnter the check amount in the format \"$xxx.xx\":\n");
		scanf("$%d.%d", &hundreds, &cents);

		if (hundreds >= 100) {
			printf("The amount exceeds $1,000. Please try again.\n\n");
		}
	}

	if (flag == 2) {
		printf("\nEnter the check amount in the format \"xx,xxx.xx\":\n");
		scanf("%d,%d.%d", &thousands, &hundreds, &cents);

		if (thousands >= 100) {
			printf("The maximum permissible amount is $99,999.99. Please try again.\n\n");
		}
	}

	else {
		printf("Press either 1 or 2\n\n");
	}

	if (cents >= 100) {
		printf("The number of cents cannot exceed 99. Please try again.\n\n");
	}

	/*Printing Output*/
	
	amount = (float)((thousands * 1000) + hundreds + (cents / 100));

	if (thousands >= 10) {

		if (hundreds >= 100 && cents >= 10)
			printf("The check amount is **%d,%3d.%2d", thousands, hundreds, cents);

		else if (hundreds >= 100 && cents < 10)
			printf("The check amount is **%d,%d.0%d", thousands, hundreds, cents);

		else if (hundreds < 100 && cents < 10)
			printf("The check amount is **%d,0%d.0%d", thousands, hundreds, cents);

		else if (hundreds < 100 && cents >= 10)
			printf("The check amount is **%d,%d.%d", thousands, hundreds, cents);
	}



    return 0;
}

