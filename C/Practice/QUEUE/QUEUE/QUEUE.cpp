// QUEUE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct queue {
	int a[10];
	int start = 0;
	int end = 0;

	void(*enqueueptr)(int x, struct queue *s);
	int(*dequeueptr)(struct queue *s);
};

void enqueue(int x, struct queue *s);
int dequeue(struct queue *s);

int main()
{
	struct queue s1;
	int x, choice;

	s1.enqueueptr = enqueue;
	s1.dequeueptr = dequeue;

	while (1) {
		printf("1 to enqueue\n2 to dequeue\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			printf("\nEnter x: ");
			scanf_s("%d", &x);
			s1.enqueueptr(x, &s1);
			break;

		case 2:
			printf("%d was dequeued\n", s1.dequeueptr(&s1));
			break;

		default:
			printf("\nWrong choice\n");
			break;
		}
	}
    return 0;
}

void enqueue(int x, struct queue *s) {
	s->a[s->start] = x;
	s->start++;
}

int dequeue(struct queue *s) {
	int temp;

	temp = s->a[s->end];
	s->end++;

	return(temp);
}

