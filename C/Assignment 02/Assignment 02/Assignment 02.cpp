// Assignment 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "ctype.h"


int main()
{
	char amount[9], final_amount[10];
	int string_length, asterix_length, i, j, end = 0;

	/*Obtaining the Check Amount*/
	printf("The maximum amount that can be entered is $99,999.99 only\n");

	printf("Enter the check amount: ");
	scanf("%s", amount);

	for (i = 0; i < 9; ++i) {
		if (amount[i] == '\0') {
			end = i;
			break;
		}
	}
	

	/*Checking for Errors in Input*/
	if (amount[0] == ',' || end == 0 || amount[end-3] != '.') {
		printf("The check amount is invalid. Please type a valid amount.\n");
		return 0;
	}

	for (i = 0; i < end; ++i)
	{
		if (isdigit(amount[i]) == 0 && amount[i] != '.') {
			printf("The check amount is invalid. Please type a valid amount.\n");
			return 0;
		}
	}

	/*Copying to Check-Format*/
	
	for (i = 0; i < 10; ++i) {
		final_amount[i] = -1;
	}

	for (i = 0, j = end-1; j >= 0; ++i, j--) {
		if (i == 6) {
			final_amount[6] = ',';
			++j;
			continue;
		}
		final_amount[i] = amount[j];
		end = i;
	}


	printf("\nThe check amount you entered is $");
	for (i = end; i >= 0; --i) {
		printf("%c", final_amount[i]);
	}
	printf("\n");

	
	/*Printing Write-Protected Check Amount*/
	string_length = end+1;

	asterix_length = 9 - string_length;

	printf("\nThe write-protected check amount is $");

	for (i = 1; i <= asterix_length; ++i)
		printf("*");

	for (i = end; i >= 0; --i) {
		printf("%c", final_amount[i]);
	}
	
	printf("\n\n");

    return 0;
}

