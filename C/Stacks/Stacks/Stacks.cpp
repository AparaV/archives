// Stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Stack {
	int a[10];
	int top = -1;

	void(*pushptr) (struct Stack *s, int x);
	int(*popptr) (struct Stack *s);
};

void push(struct Stack *s, int x) {
	s->top++;
	s->a[s->top] = x;
}

int pop(struct Stack *s) {
	int temp = s->a[s->top];
	s->top--;
	return (temp);
}

int main()
{
	struct Stack s1;
	int a, b, i;

	s1.pushptr = push;
	s1.popptr = pop;

	printf("Enter element to push: ");
	scanf_s("%d", &a);

	for (i = 0; i <= s1.top; ++i)
		printf("%d", s1.a[i]);

	push(&s1, a);

	for (i = 0; i <= s1.top; ++i)
		printf("%d", s1.a[i]);

	printf("Element popped was %d", pop(&s1));

	
    return 0;
}

