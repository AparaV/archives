// Assignment 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

/*(Check Protection) Computers are frequently used in check writing systems, such as payroll and accounts payable applications.
May stories circulate regarding weekly paychecks being printed (by mistake) for amounts in excess of $1 million.
Weird amounts are printed by computerised check-writing systems because of human error and/or machine failure. System designers,
of course make every effort to build controls into their systems to prevent erroneous checks from being issued.
Another serious problem in the intentional alteration of a check amount by someone who intends to cash it fraudulently. To prevent
a dollar amount from being altered, most computerised check-writing systems employ a technique called check protection.
Checks desinged for imprinting by computer contain a fixed number of spaces in which the computer may print an amount. Suppose a 
paycheck contains nine spaces in which the cimputer is supposed to print the amount of weekly paycheck. If the amount is huge, then
all nine of those will be filled - for example
			11,230.60
			---------
			123456789
On the other hand, if the amount is less than $1000, then several of the spaces will ordinarily be left blank - for example
			    99.87
			---------
			123456789
contains four blnk spaces. If a check is printed with blank spaces, it's easier for someone to alter the amount of the check. To
prevent such alteration, many check-writing systems insert leading asteriks to protect the amount as follows
			****99.87
			---------
			123456789
Write a program that inputs a dollar amount to be printed on a check and then prints the amount in check-protected format with leading
asteriks if necessary. Assume that nine spaces are available for printing an amount.*/

int main()
{
	float amount;
	char string_amount[9], final_string[10];
	int i, j, string_length;

	(char*)memset(final_string, '*', 9);


	/*Getting input*/

	for ( ; ; ) {
		printf("\nThe maximum possible check amount is $99,999.99 only\n");

		printf("\nEnter the check amount: ");
		scanf("%f", &amount);

		/*Reporting error in input*/

		if (amount < 0) {
			printf("\nThe value you have entered is less than zero. Please enter again.");
			continue;
		}

		if (amount > 99999.99) {
			printf("\nThe value you have entered exceeds the maximum amount. Please enter again.");
			continue;
		}
		else
			break;
	}


	sprintf(string_amount, "%.2f", amount);

	string_length = strlen(string_amount);


	/*Printing write-protected check amount*/

	for (i = string_length-1, j = 8; i >= 0; --i, --j) {
		
		if (j == 2) {
			final_string[2] = ',';
			++i;
		}

		else
			final_string[j] = string_amount[i];
	}

	final_string[9] = '\0';

	printf("\nThe write-protected check amount is $%s", final_string);
	
    return 0;
}

