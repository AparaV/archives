// linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

struct node {
	int data;
	struct node *nptr;
};

void insert(int x, int pos);
void del(int pos);
void print();

struct node *hptr = NULL;

int main()
{
	int choice, x, pos;
	while (1) {
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			printf("Enter data and pos\n");
			scanf_s("%d%d", &x, &pos);
			insert(x, pos);
			break;

		case 2:
			printf("Enter pos\n");
			scanf_s("%d", &pos);
			del(pos);
			break;

		case 3:
			print();
			break;

		default:
			break;
		}

	}
    return 0;
}

void insert(int x, int pos) {
	struct node *temp = (node *)malloc(sizeof(struct node));

	temp->data = x;

	if (pos == 1) {
		temp->nptr = hptr;
		hptr = temp;
	}

	else {
		struct node *thptr = hptr;
		int i = 1;

		while (i < pos) {
			++i;
			thptr = thptr->nptr;
		}

		if (thptr != NULL) {
			temp->nptr = thptr->nptr;
			thptr->nptr = temp;
		}
	}
}

void del(int pos) {
	struct node *thptr = hptr;
	int i = 1;

	while (i < pos) {
		++i;
		thptr = thptr->nptr;
	}

	thptr->nptr = (thptr->nptr)->nptr;
}

void print() {
	struct node *thptr = hptr;

	while (thptr != NULL){
		printf("%d ", thptr->data);
		thptr = thptr->nptr;
	}

	printf("%d\n", thptr->data);
}