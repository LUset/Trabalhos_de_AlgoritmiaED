#pragma once
#include <deque>
#include <iostream>
#include <stdexcept>

template<typename T>
class Fila {
public:
	void Enqueue(const T& value) {
		fila.push_back(value);
	}
	void Dequeue() {
		if (!isEmpty()) {
			fila.pop_front();
		}
		else {
			throw logic_error{ " Fila vazia \n\n" };
			//retira os valores do inicio da fila
			fila.pop_front();
		} 
	}

	const T& front() {
		if (isEmpty()) {
			throw logic_error{ " Fila vazia \n\n" };
		}

		//mostra o primeiro valor da fila
		return fila.front(); 

	}

	size_t size()const {
		return fila.size();
	}
	bool isEmpty() {
		return fila.empty();
	}

private:
	std::deque<T>fila;
};
