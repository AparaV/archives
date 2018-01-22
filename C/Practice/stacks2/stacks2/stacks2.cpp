// stacks2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct stack {
	int a[10];
	int top = 0;
	void (*pushptr)(int x, struct stack *s);
	int (*popptr)(struct stack *s);
};

void push(int x, struct stack *s);
int pop(struct stack *s);

int main()
{
	struct stack s1;
	int x, choice;

	s1.pushptr = push;
	s1.popptr = pop;

	while (1) {
		printf("\n1 to push\n2 to pop\n");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("Enter data to push\n");
				scanf("%d", &x);
				s1.pushptr(x, &s1);
				break;

			case 2:
				printf("%d was popped\n", s1.popptr(&s1));
				break;

			default:
				printf("Wrong choice!");
				break;

		}
	}

	return 0;
}

void push(int x, struct stack *s) {
	s->a[s->top] = x;
	s->top++;
}

int pop(struct stack *s) {
	int temp;

	temp = s->a[s->top-1];
	s->top--;

	return(temp);
}

