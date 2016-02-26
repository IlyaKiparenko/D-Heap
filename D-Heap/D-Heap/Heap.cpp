#include "Heap.h"

Heap::Heap(int n, int d_ = 2) {
	size = n;
	m = new int[size];
	d = d_;
}

Heap::~Heap() {
	delete[] m;
}