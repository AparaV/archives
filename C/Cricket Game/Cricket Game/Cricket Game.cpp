// Cricket Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"


int main()
{
	int comp, player, cscore, pscore, i;

	for (pscore = 0, comp = 1, i = 1; ; ++i) {
		comp = 1 + (srand( time(NULL) )%6);
		
		printf("Bat (Enter a number between 1 and 6): ");
		scanf_s("%d", &player);

		if (comp != player) {
			pscore += player;

			if (i % 6 == 0)
				printf("Your score so far = %d\n\n", pscore);
		}

		else if (comp == player) {
			printf("You are out!\n");
			break;
		}
		
	}

	printf("Your final score is %d\n\nNow you have to bowl\n\n", pscore);

	for (cscore = 0, i = 1; pscore >= cscore; ++i) {
		comp = 1 + (srand( time (NULL) ) % 6);

		printf("Bowl (Enter a number between 1 and 6): ");
		scanf_s("%d", &player);

		if (comp != player) {
			cscore += comp;

			if (i % 6 == 0)
				printf("The computer's score so far = %d\n\n", cscore);
		}

		else if (comp == player) {
			printf("You got the computer out!");
			break;
		}

	}

	printf("\nThe computer's final score is %d\n", cscore);

	if (cscore == pscore)
		printf("\n\nThe match is a draw");
	if (cscore > pscore)
		printf("\n\nYou lose :(");
	if (pscore > cscore)
		printf("\n\nYou win :)");
	
    return 0;
}

