#include <iostream>
#include <queue>
#include "stack.h"
using namespace std;


int main() {



	Fila<double> Dvalues;
	double value;
	int n = 1;

	cout << "Elementos (Double) (acabar com '0') : " << endl;
	cin >> value;
	do {
		n++;
		cin >> value;
		Dvalues.Enqueue(value);
	} while (value != 0);

	for (int i = 0; i<n; i++) { cout << "Elementos: " << Dvalues << endl; }


	system("pause");
	return 0;
}
