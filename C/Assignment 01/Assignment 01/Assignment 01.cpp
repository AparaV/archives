// Assignment 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "ctype.h"


int main()
{
	char amount[10];
	int string_length, asterix_length, i, end = 0;

	/*Obtaining the Check Amount*/
	printf("The maximum amount that can be entered is $99,999.99\n");

	printf("Enter the check amount: ");
	scanf("%s", amount);


	for (i = 0; i < 10; ++i)
		if (amount[i] == '\0')
			end = i;

	/*Checking for Errors in Input*/
	if (amount[0] == ',' || end == 0) {
		printf("The check amount is invalid. Please type a valid amount.\n");
		return 0;
	}

	for (i = 0; i < end; ++i)
	{
		if (isdigit(amount[i]) == 0 && amount[i] != ',' && amount[i] != '.') {
			printf("The check amount is invalid. Please type a valid amount.\n");
			return 0;
		}
	}

	/*Printing Write-Protected Check Amount*/
	string_length = strlen(amount);

	asterix_length = 9 - string_length;

	printf("\nThe write-protected check amount is ");

	for (i = 1; i <= asterix_length; ++i)
		printf("*");

	printf("%s", amount);

    return 0;
}

