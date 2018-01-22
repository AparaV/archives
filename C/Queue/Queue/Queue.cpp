// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Queue {
	int a[100];
	int front = 0;
	int rear = -1;

	int(*removeendptr)(struct Queue *s);
	void(*addbeginptr)(struct Queue *s, int x);
};

//Removing from front end
int removeend(struct Queue *s) {
	
	int temp = s->a[s->front], i;
	
	//Moving the Queue
	for (i =0; i <= s->rear; ++i) {
		s->a[i] = s->a[i+1];
	}
	
	//Resetting rear end value
	s->rear--;

	return(temp);
}

//Adding a new element
void addbegin(struct Queue *s, int x) {
	s->rear++;
	s->a[s->rear] = x;
}


int main()
{
	struct Queue s1;

	int i, b , x;

	s1.removeendptr = removeend;
	s1.addbeginptr = addbegin;

	for (i = 0; i < 10; ++i) {
		printf("Add new member to queue: ");
		scanf_s("%d", &b);
		addbegin(&s1, b);
	}

	for (i = 0; i < 10; ++i)
		printf("%d ", s1.a[i]);

	printf("\nHow many members do you want to move the queue by?\n");
	scanf_s("%d", &x);

	for (i = 1; i <= x; ++i)
		removeend(&s1);

	for (i = 0; i < 10; ++i)
		printf("%d ", s1.a[i]);

    return 0;
}

