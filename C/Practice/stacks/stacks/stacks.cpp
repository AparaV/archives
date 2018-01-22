// stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct stack {
	int a[10];
	int top = 0;
	void(*pushptr)(int x, struct stack *s);
	void(*popptr)(struct stack *s);
};

void push(int x, struct stack *s);
void pop(struct stack *s);

int main()
{
	struct stack s1;

	s1.pushptr = push;
	s1.popptr = pop;
	return 0;
}

