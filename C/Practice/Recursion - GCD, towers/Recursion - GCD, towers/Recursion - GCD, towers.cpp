// Recursion - GCD, towers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int towers(int n, char a, char b, char c);
int gcd(int a, int b);

int main()
{
	int n, a ,b;

	printf("Enter number of disks: ");
	scanf("%d", &n);

	//towers(n, 'A', 'B', 'C');
	printf("The number of moves is %d\n", towers(n, 'A', 'B', 'C'));

	printf("\nEnter a and b:\n");
	scanf("%d %d", &a, &b);


	printf("%d", gcd(a, b));
    return 0;
}

int towers(int n, char a, char b, char c) {

	static int i = 0;
	if (n == 0)
		return(0);
	else {
		towers(n - 1, a, c, b);
		//printf("Move from %c to %c\n", a, c);
		++i;
		towers(n - 1, b, a, c);
		return(i);
	}
}

int gcd(int a, int b) {
	if (b == 0)
		return(a);
	else
		return(gcd(b, a % b));
}
