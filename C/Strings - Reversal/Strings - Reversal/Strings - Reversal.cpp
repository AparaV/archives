// Strings - Reversal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void reverse(void);

int main()
{
	//char string[5];
	//int i, n;
	//char temp;

	printf("Enter a string:\n");
	reverse();

    return 0;
}

void reverse(void) {

	char c;

	if ((c = getchar()) != '\n') {
		reverse();
	}
		putchar(c);
}
