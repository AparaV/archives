// Text Editor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int c;

	while (1) {
		c = getchar();

		if ((c = getchar()) != EOF) {
			putchar('I');
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf(" ");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("a");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("m");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf(" ");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("f");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("o");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("o");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf("l");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf(".");
			c = getchar();
		}

		if ((c = getchar()) != EOF) {
			printf(" ");
			c = getchar();
		}

	}
    return 0;
}

