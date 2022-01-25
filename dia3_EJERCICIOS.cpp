# include <iostream>
using namespace std;



int main() {

	int numeros = 100;
	int salto = 4;
	int arrayNumeros [numeros];
	int arraySuma [numeros/salto];
	int suma;
	int cont = 0;
	for (int i = 0; i < numeros; i++){
		arrayNumeros [i] = i;
	}

	for (int j = 0; j < numeros; j+=4){
		suma = arrayNumeros[j]+arrayNumeros[j+1]+arrayNumeros[j+2]+arrayNumeros[j+3];
		arraySuma[cont] = suma;
		cont++;
	}

	for (int k = 0; k < numeros/salto; k++){
		cout << arraySuma[k] << endl;
	}

	return 0;
}


/*
EJERCICIOS:
Rellena un vector con los 100 primeros numeros.
Suma de 4 en 4 los numeros y guardalos en otro vector.
*/