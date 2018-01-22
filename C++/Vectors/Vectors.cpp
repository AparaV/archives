// Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "vector"
using namespace std;

int main()
{
	vector<int> v;
	int size = 10;
	v.reserve(size);
	for (int i = 0; i < size; ++i)
		v.push_back(i+1);
	for (int i = 0; i < size; ++i)
		cout << v.at(i) << " ";
	cout << endl;
	vector<double> x(v.begin(), v.end());
	vector<double>::iterator i;
	for (i = x.begin(); i != x.end(); ++i)
		cout << (*i) << " ";
	cout << endl;
    return 0;
}

