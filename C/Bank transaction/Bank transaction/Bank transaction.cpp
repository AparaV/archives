// Bank transaction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Client {
	unsigned int acno;
	char name[20];
	float balance;
};

unsigned int choices(void);
void text_file(FILE *readptr);
void create_record(FILE *fptr);
void update_record(FILE *fptr);
void delete_record(FILE *fptr);

int main()
{
	FILE *fp;
	struct Client blankclient = { 0, "", 0 };

	fp = fopen("new.txt", "rb+");

	fwrite(&blankclient, sizeof(struct Client), 100, fp);

	create_record(fp);

	delete_record(fp);

	fclose(fp);

    return 0;
}

void create_record(FILE *fptr) {
	struct Client client;
	unsigned int key;

	printf("\nEnter a new account number: ");
	scanf("%u", &key);

	fseek(fptr, (key - 1)*(sizeof(struct Client)), SEEK_SET);

	fread(&client, sizeof(struct Client), 1, fptr);

	if (client.acno != 0)
		printf("\nError! Account already exists!\n");
	else {
		printf("\nEnter Name and balance:\n");
		scanf("%s, %f", client.name, &client.balance);

		fseek(fptr, (key - 1)*(sizeof(struct Client)), SEEK_SET);

		fwrite(&client, sizeof(struct Client), 1, fptr);
	}
}

void delete_record(FILE *fptr) {
	struct Client blankclient = { 0, "", 0 };
	struct Client client;
	unsigned int key;

	printf("\nEnter an account number to delete: ");
	scanf("%u", &key);

	fseek(fptr, (key - 1)*(sizeof(struct Client)), SEEK_SET);
	fread(&client, sizeof(struct Client), 1, fptr);

	if (client.acno == 0)
		printf("\nAccount does not exist!\n");
	else {
		fseek(fptr, (key-1)*(sizeof(struct Client)), SEEK_SET);

		fwrite(&blankclient, sizeof(struct Client), 1, fptr);
	}
}

