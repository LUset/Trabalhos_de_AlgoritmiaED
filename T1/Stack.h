// Stack class template.
#ifndef STACK_H
#define STACK_H
#include <deque>

template<typename T>
class Fila { //fila
public:
	// return the top element of the Fila
	const T& front() { // front
		return fila.front();
	}

	// push an element onto the Fila
	void Enqueue(const T& pushValue) { //Enqueue
		fila.push_back(pushValue); //back
	}

	// pop an element from the fila
	void Dequeue() { //Dequeue
		fila.pop_front();
	}

	// determine whether Fila is empty
	bool isEmpty() const {
		return fila.empty();
	}

	// return size of Fila
	size_t size() const {
		return fila.size();
	}

private:
	std::deque<T> fila; // internal representation of the fila
};

#endif
#pragma once
