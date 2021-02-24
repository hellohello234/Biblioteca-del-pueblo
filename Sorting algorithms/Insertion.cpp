#include<iostream>

using namespace std;

int main(){
	int numeros[] = {4,5,2,1,3};
	int pos,aux;
	
	//Metodo por insercion:
	for(int i = 0; i < 5; i++){
		pos = i;
		aux = numeros [i];
		
		while ((pos>0) && (numeros[pos-1]>aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	for(int i = 0; i < 5; i++){
		cout<<numeros[i]<<endl;
	}
}
