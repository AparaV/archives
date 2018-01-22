// Classes and Operator Overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class point {
public:
	point() :x(0), y(0) {}
	point(double x, double y) :x(x), y(y) {}
	double getx() { return x; };
	//void setx(double v) { x = v; };
	double gety() { return y; };
	//void sety(double v) { y = v; };
private:
	const double x, y;
};

point operator+ (point a, point b) {
	double x, y;
	x = a.getx() + b.getx();
	y = a.gety() + b.gety();
	point c(x, y);
	return c;
}

ostream& operator<< (ostream& out, point a) {
	out << "( " << a.getx() << "," << a.gety() << " )";
	return out;
}


int main()
{
	point A1(1,2), A2(2,1);
	
	point A3 = A1 + A2;
	cout << A3;
    return 0;
}

