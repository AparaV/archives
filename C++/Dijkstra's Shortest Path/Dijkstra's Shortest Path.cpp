// Dijkstra's Shortest Path.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "ctime"
using namespace std;

inline double prob() { return double(rand() % 7) / 6; }

class graph {
public:
	graph() {}; // constructor
	graph(int size);
	int getsize() { return size; };
	int getgrph(int i, int j) { return grph[i][j]; };
	friend ostream& operator<< (ostream& out, graph g);
	friend bool is_connected(graph g);
	//~graph() { cout << "Destructor Invoked" << endl; delete grph; };
private:
	int size;
	int** grph;
};

graph::graph(int size) {
	/*bool** grph;*/
	this->size = size;
	grph = new int*[size];
	for (int i = 0; i < size; ++i)
		grph[i] = new int[size];
	for (int i = 0; i < size; ++i)
		for (int j = i; j < size; ++j) {
			if (i == j)
				grph[i][j] = 0;
			else
				grph[i][j] = grph[j][i] = (prob() < 0.19)*(rand()%10);
		}
}

ostream& operator<< (ostream& out, graph g) {
	for (int i = 0; i < g.size; ++i) {
		for (int j = 0; j < g.size; ++j)
			out << g.grph[i][j] << '\t';
		out << endl;
	}
	return out;
}

bool is_connected(graph g) {
	int old_size = 0, c_size = 0;
	bool* open = new bool[g.size];
	bool* closed = new bool[g.size];
	for (int i = 0; i < g.size; ++i)
		open[i] = closed[i] = false;
	open[0] = true;

	while (c_size < g.size) {
		for (int i = 0; i < g.size; ++i) {
			old_size = c_size;
			if (open[i] && (closed[i] == false)) {
				closed[i] = true;
				c_size++;
			}
			for (int j = 0; j < g.size; ++j) {
				open[j] = open[j] || g.grph[i][j];
			}
		}
		if (c_size == g.size) return true;
		if (old_size == c_size) return false;
	}
	return false;
}

void shortest_path(graph g, int source, int dest) {
	int size = g.getsize();
	int* open = new int[size];
	int* closed = new int[size];

}

int main()
{
	srand(clock());
	graph g(5);
	cout << g << endl;
	cout << is_connected(g) << endl;
    return 0;
}

