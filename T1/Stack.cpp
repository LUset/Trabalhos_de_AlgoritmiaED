// Stack class template test program.
#include <iostream>
#include "Stack.h" // File class template definition
using namespace std;

int main() {
	Fila <double> doubleFila; // create a File of double
	const size_t doubleFilaSize{ 5 }; // file size
	double doubleValue{ 1.1 }; // file value to push

	cout << "Colocando elementos na Fila (doubleFila) \n";

	// push 5 doubles onto doubleFila
	for (size_t i{ 0 }; i < doubleFilaSize; ++i) {
		doubleFila.Enqueue(doubleValue); // Enqueue
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	cout << "\n\nRetirando elementos da Fila (doubleFila) \n";

	// pop elements from doubleStack
	while (!doubleFila.isEmpty()) { // loop while File is not empty
		cout << doubleFila.front() << ' '; // display top element
		doubleFila.Dequeue(); // remove top element
	}

	cout << "\n\nFila vazia!!! \n";

	Fila<int> intFila; // create a File of int
	const size_t intFilaSize{ 10 }; // file size
	int intValue{ 1 }; // first value to push

	cout << "\nColocando elementos na Fila (intFila) \n";

	// push 10 integers onto intStack
	for (size_t i{ 0 }; i < intFilaSize; ++i) {
		intFila.Enqueue(intValue);
		cout << intValue++ << ' ';
	}

	cout << "\n\nRetirando elementos da Fila (intFila) \n";

	// pop elements from intFile
	while (!intFila.isEmpty()) { // loop while File is not empty
		cout << intFila.front() << ' '; // display top element
		intFila.Dequeue(); // remove top element
	}

	cout << "\n\nFila vazia!!! \n\n" << endl;
	system("pause");
}
