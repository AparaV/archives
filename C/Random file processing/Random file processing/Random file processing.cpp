// Random file processing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Client {
	int acno;
	char name[20];
	float balance;
};

int main()
{
	struct Client bankclient = { 0, "", 0 };
	//bankclient.acno = 0;
	//(char*)memset(bankclient.name, '*', 20);
	//bankclient.balance = 0;

	int result, key;
	FILE *fp;

	/*Creating empty records*/
	fp = fopen("data.txt", "wb");

	fwrite(&bankclient, sizeof(struct Client), 100, fp);

	fclose(fp);

	/*Writing data*/
	fp = fopen("data.txt", "rb+");

	printf("Enter account number (0 to end): ");
	scanf("%d", &bankclient.acno);

	while (bankclient.acno != 0) {

		printf("Enter name and balance: ");
		scanf("%s %f", bankclient.name, &bankclient.balance);

		fseek(fp, (bankclient.acno - 1)*(sizeof(int)), SEEK_SET);

		fwrite(&bankclient, sizeof(struct Client), 1, fp);

		printf("Enter account number (0 to end): ");
		scanf("%d", &bankclient.acno);

	}

	fclose(fp);

	/*Reading from file*/

	/*fp = fopen("data.txt", "rb");

	while (!feof(fp)) {

		result = fread(&bankclient, sizeof(struct Client), 1, fp);

		if (result != 0 && bankclient.acno != 0) {
			printf("\n\nName %s\tAc.No %d\tBalance %f", bankclient.name, bankclient.acno, bankclient.balance);
		}
	}

	fclose(fp);*/

	/*Searching file*/

	fp = fopen("data.txt", "rb");

	printf("Enter the ac no: ");
	scanf("%d", &key);

	fseek(fp, (key - 1)*(sizeof(struct Client)), SEEK_SET);

	result = fread(&bankclient, sizeof(struct Client), 1, fp);

	if ( result!= 0)
		printf("\nName %s", bankclient.name);

	fclose(fp);


    return 0;
}

