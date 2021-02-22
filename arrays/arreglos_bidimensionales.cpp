#include<bits/stdc++.h>

using namespace std;

int main(){
    /*Arreglos multidimensionales.*/
    /*Podemos definir los arreglos multidimensinales como "arreglos de arreglos".*/
    int x[10][20];

    //La forma basica de declarar un arreglo de dos dimensiones de tamaño x, y es:
    //Tipo de dato, nombre del arreglo, [][]. Ejemplo
    int a[10][20];

    /*Nota: Normalmente los elementos en arreglos de dos dimensiones son referenciados 
    por x[i][j] donde i es el numero de fila y j el de columna.*/

    /*Un arreglo bidimensional puede ser visto como una tabla con "x" filas y "y" columnas.*/

    //Para inicializar un arreglo de dos dimensiones hay dos formas:

    //Primer metodo:
    int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}

    /*En en arreglo mostrado previamente tenemos 3 filas y 4 columnas. Los elementos en llaves de 
    izquierda a derecha son almacenados en la tabla tambien de izquierda a derecha. Los elementos seran
    llenados en en orden en el arreglo, los primeros 4 elementos desde la izquierda siendo de de la primera
    fila, los siguientes 4 elementos de la segunda fila ya si sucesivamente.*/

    //Segundo metodo (Recomendado):
    int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

    /*Este tipo de inicializacion hace uso de las llaves anedadas. Cada grupo de llaves representa una fila.
    En el ejemplo anterior hay un total de tres filas por lo que hay en total 3 grupos de llaves.*/


    /*********************************************************************************************************/

    /*Acceder a los elementos de un arreglo bidimensional.*/
    int x[2][1];

    //El ejemplo de arriba representa el elemento presente en la tercera fila y segunda columna.

    /*Nota: En arreglos si el tamaño del arreglo es N. su indice sera desde 0 hasta N-1. Por lo tanto, para el indice
    de la fila 2, el numero de la fila es 2+1 = 3.*/

    //Mostrar los elementos de un arreglo bidimensional:

    /*Para mostrar todos los elementos de un arreglo bidimensional podemos usar los bucles anidados. Requeriremos de 2 ciclos "for"
    Uno para iterar las filas y otro para iterar las columnas.*/

    int c[3][2] = {{0,1}, {2,3}, {4,5}};

    for(int i = 0; i < 3; i++){
        /*Utilizamos un dos en "i < 2" porque recordemos que en arreglos si el tamaño del arreglo es N. su indice sera desde 0 hasta N-1. 
        Por lo tanto, para el indice de la fila 2, el numero de la fila es 2+1 = 3.*/
        for(int j = 0; i < 2; j++){
            cout << "Element at x[" << i 
                 << "][" << j << "]: "; 
            cout << x[i][j]<<endl; 
        }
    }
}