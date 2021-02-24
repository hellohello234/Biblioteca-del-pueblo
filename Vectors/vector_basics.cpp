#include<iostream>
#include<vector>

using namespace std;

int main() {
	//Sintaxis basica para declarar un vector:
	/*Utilizamos la palabra clave "vector" y entre <> indicamos el tipo de dato que va a almacenar y fuera de las <> indicamos el nombre de nuestor vector.
	Nota: Recuerde que un vector solo puede almacenar UN solo tipo de dato, que es el que le indicamos*/
	vector<int> vector_a;

	/*Almacenar datos en un vector:*/

	//La primera forma de almacenar datos en un vector es inicializarlo con llaves, tal que:
	vector<int> vector_b = { 1, 2, 3 };

	/*Iterar dentro de un vector.*/
	
	//Primer metodo:
	for (int i = 0; i < vector_b.size(); ++i) {
		cout << vector_b[i] << endl;
	}

	//Segundo metodo (Esta es la forma tradicional):
	for (vector<int>::iterator it = vector_b.begin(); it != vector_b.end(); ++it) {
		cout << *it << endl;
	}

	//Tercer metodo (Esta es la forma recomendada):
	for (auto it = vector_b.begin(); it != vector_b.end(); ++it) {
		cout << *it << endl;
	}

}

