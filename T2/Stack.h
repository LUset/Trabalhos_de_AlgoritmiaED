#pragma once
#pragma once
#include <iostream>
#include <deque>



template<typename T>
class Fila {
	friend std::ostream&operator<< (std::ostream& output, Fila&fil) {
		if (fil.isEmpty()) {
			output << " Vazia!!! ";
		}
		else {
			output << fil.front();
			fil.Dequeue();
		}
		return output;
	}
	friend std::istream&operator>> (std::istream& input, Fila&fil) {
		input >> fil.value;
		fil.Enqueue(fil.value);

		return input;
	}

public:

	void Enqueue(const T& value) {
		//coloca os valores no fim da fila
		fila.push_back(value); 
	}
	void Dequeue() {
		//retira os valores do inicio da fila
		fila.pop_front(); 
	}
	const T& front() {
		//mostra o valor na frente da fila
		return fila.front(); 
	}
	size_t size()const {
		//tamanho da fila
		return fila.size(); 
	}
	bool isEmpty() {
		return fila.empty();
	}

private:
	std::deque<T>fila;
	T value;
};