// Sequential file processing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	FILE *fp;
	char name[20];
	int phone, c;

	/*fp = fopen("file.txt", "w");

	printf("Enter name and phone number:\n? ");

	scanf("%s%d", name, &phone);

	while (!feof(stdin)) {

		fprintf(fp, "%s%d", name, phone);

		printf("\n? ");

		scanf("%s%d", name, &phone);
	}*/

	if ((fp = fopen("file.txt", "r")) != NULL){

		//fp = fopen("file.txt", "r");

		fscanf(fp, "%s%d", name, &phone);

		while (!feof(fp)) {
			printf("%s %d", name, phone);
			fscanf(fp, "%s%d", name, &phone);
		}

		fclose(fp);
	}

	fclose(fp);

    return 0;
}

