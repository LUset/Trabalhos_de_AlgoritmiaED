#include <iostream>
#include "stack.h"
#include <queue>
using namespace std;


int main() {
	Fila<double> doubleFila; // create a Stack of double
	const size_t doubleFilaSize{ 5 }; // stack size
	double doubleValue{ 1.1 }; // first value to push

	cout << "Colocando elementos na Fila (doubleFila) \n";

	// push 5 doubles onto doubleStack
	for (size_t i{ 0 }; i < doubleFilaSize; ++i) {
		doubleFila.Enqueue(doubleValue);
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\n\nRetirando elementos da Fila (doubleFila) \n";

	// pop elements from doubleStack
	// loop while Stack is not empty
	while (!doubleFila.isEmpty()) { 
		// display top element
		cout << doubleFila.front() << ' ';
		// remove top element
		doubleFila.Dequeue(); 
	}

	cout << "\n\nFila vazia!!! \n";

	// create a Stack of int
	Fila<int> intFila; 
	// stack size
	const size_t intFilaSize{ 10 }; 
	// first value to push
	int intValue{ 1 }; 

	cout << "\n\nColocando elementos na Fila (intFila) \n";

	// push 10 integers onto intStack
	for (size_t i{ 0 }; i < intFilaSize; ++i) {
		intFila.Enqueue(intValue);
		cout << intValue << ' ';
		intValue++;
	}

	cout << "\n\nRetirando elementos da Fila (intFila) \n";

	// pop elements from intStack
	// loop while Stack is not empty
	while (!intFila.isEmpty()) { 
		// display top element
		cout << intFila.front() << ' '; 
		// remove top element
		intFila.Dequeue(); 
	}

	cout << "\n\nFila vazia!!! " << endl;


	cout << "\n\n Exception " << endl << endl;
	Fila<float>floatFila;

	try {
		floatFila.Dequeue();
	}
	catch (logic_error& fil) {
		cout << fil.what();
	}

	try {
		floatFila.front();
	}
	catch (logic_error& fil) {
		cout << fil.what();
	}

	system("pause");
	return 0;
}

