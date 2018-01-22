// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float x = 3.15;

	printf("%f", x);
	printf("%1.6f", x);

	if (x == 3.15)
		printf("Yes");
	else
		printf("No");

    return 0;
}

