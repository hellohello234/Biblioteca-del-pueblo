include<bits/stdc++.h>

using namespace std;

int main(){

    /*Declaracion de arreglos.*/

    //Para crear un arreglo especificamos el tipo, el nombre y el tamaño del arreglo.
    int a[5];

    //Tambien podemos asignar los valores del arreglo desde un principio. Simplemente debemos de poner los elementos entre llaves.
    int b[3] = {1,2,3};

    /*Podemos acceder los elementos del arreglo referenciando su indice. Para ello ponemos el indice del elemento dentro de corchetes 
    luego del nombre del arreglo.*/
    int numeroejemplo = b[2] //En este ejemplo estamos asignando el elemento posicion 2 del arreglo "b" como valor a la variable "numeroejemplo".

    /*Loops y arreglos.*/

    //Podemos mostrar los elementos de un arreglo mediante las iteraciones de un ciclo:
    for(int i = 0; i < b.size; i++){ //Podemos utilizar la funcion "length" o "size" para obtener la longitud de un arreglo
        cout<<b[i]<<"\n";
    }

    //De igual manera podemos ingresar elementos en un array mediante las iteraciones de un ciclo:
    for(int i = 0; i < b.size; i++){
        //Lo unico que cambiamos en este caso es que utilizamos "cin" para recibir entrada.
        cin>>b[i];
    }

}