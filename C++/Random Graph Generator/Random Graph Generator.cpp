// Random Graph Generator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "ctime"
using namespace std;

inline double prob() {
	return double (rand() % 7) / 6;
}

bool is_connected(bool* graph[], int size) {
	int old_size = 0, c_size = 0;
	bool* open = new bool[size];
	bool* closed = new bool[size];
	for (int i = 0; i < size; ++i)
		open[i] = closed[i] = false;
	open[0] = true;

	while (c_size < size){
		for (int i = 0; i < size; ++i) {
			old_size = c_size;
			if (open[i] && (closed[i] == false)) {
				closed[i] = true;
				c_size++;
				for (int j = 0; j < size; ++j)
					open[j] = open[j] || graph[i][j];
			}
		}
	if (c_size == size) return true;
	if(old_size == c_size) return false;
	}
}

int main()
{
	int size = 5;
	bool** graph;
	graph = new bool*[size];
	for (int i = 0; i < size; ++i)
		graph[i] = new bool[size];

	for (int i = 0; i < size; ++i)
		for (int j = i; j < size; ++j) {
			if (i == j)
				graph[i][j] = false;
			else
				graph[i][j] = graph[j][i] = (prob() < 0.19);
		}

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j)
			cout << graph[i][j] << '\t';
		cout << endl;
	}

	cout << is_connected(graph, size) << endl;

    return 0;
}

