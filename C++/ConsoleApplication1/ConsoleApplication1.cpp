// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;

inline double fcn(double x) { return x*x - 1; };
inline double fcn2(double x) { return x*x*x*x*x - exp(x) - 2; };

double root_find(
	double f(double),
	double a, double b,
	double eps,
	double* root)
{
	if (b - a < eps) {
		*root = (b - a) / 2;
		return f(*root);
	}

	else if (f(a)*f((b + a) / 2) <= 0)
		return root_find(f, a, (b + a) / 2, eps, root);

	else
		return root_find(f, (b + a) / 2, b, eps, root);
}


int main()
{
	double x;

	cout << "Root finder" << endl;
	root_find(fcn, 0, 4, 0.00001, &x);
	cout << "root is at " << x << " with residual " << fcn(x) << endl;
	root_find(fcn2, 0, 14, 0.00001, &x);
	cout << "root is at " << x << endl;

    return 0;
}

