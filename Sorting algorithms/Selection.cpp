#include<iostream>

using namespace std;

int main(){
	int numeros[] = {3,2,1,5,4};
	int i,j,aux,min;
	
	//Agoritmo de orderamiento por ordenacion:
	for(i = 0; i < 5; i++)
	{
		//Buscar el minimo de la lista.
		min = i;
		for(j = i+1; i < 5; j++)
		{
			if(numeros[j] < numeros[min])
			{
				//Intercambiar el primer elemento.
				min = j;
			}
		}
	}
	
	//Buscar el inimo del resto de la lista. Intercambiarlo con el segundo y asi sucesivamente.
	aux = numeros[i];
	numeros[i] = numeros[min];
	numeros[min] = aux;
}
