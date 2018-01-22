// Student Poll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
#define FREQUENCY 11
#define RESPONSES 40
{
	int responses[RESPONSES] = { 2,3,5,6,7,8,9,4,2,3,4,5,6,1,7,8,9,1,1,6,6,6,6,10,4,5,6,7,8,2,3,5,7,8,6,8 };
	int answers;

	int frequency[FREQUENCY] = { 0 };
	int rating;

	for (answers = 0; answers < RESPONSES; ++answers) {
		++frequency[responses[answers]];
	}

	printf("%s%13s\n", "Rating", "Votes");

	for (rating = 1; rating < FREQUENCY; ++rating) {
		printf("%6d%13d\n", rating, frequency[rating]);
	}

    return 0;
}

