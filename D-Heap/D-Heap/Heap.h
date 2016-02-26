#pragma once

class Heap {
	int d;
	int size;
	int* m;
public:
	Heap(int n, int d_ = 2);
	int popMin();
	void push(int u);
	~Heap();
};