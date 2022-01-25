# include <iostream>
using namespace std;

/*void mostrarArray (string array[]){
	for (int i=0; i < array->size(); i++){
		cout << "juegos " << i << " = " << array[i] << endl;
	}
}
*/


int main() {

	int numjuegos = 10;
	string juego;
	string juegos [numjuegos];

	for (int i=0; i<10; i++){
		cout << "Introduce un juego:" ;
		cin >> juegos[i];
	}
	for (int i=0; i<numjuegos; i++){
		cout << "Juegos " << i << " = " << juegos[i] << endl;
	}
	

	/*mostrarArray(juegos);*/

	return 0;
}


/*
EJERCICIOS:
Rellena un vector con los 100 primeros numeros.
Suma de 4 en 4 los numeros y guardalos en otro vector.
*/