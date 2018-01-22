// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

template <class T>
void all_ones(const T data[], int size) {
	for (int i = 0; i < size; ++i) {
		T temp = const_cast<T> (data[i]);
		const_cast<T> (data[i]) = 1;
	}
}


int main()
{
	int a[5] = { 1,1,1,1,1 };
	all_ones(a, 5);

	for (int i = 0; i < 5; ++i)
		cout << a[i] << '\t';

    return 0;
}

