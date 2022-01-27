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


//----------------------------------------------------------------------------------------------
	// EJERCICIO 1
	string contrasegna;
	string entrada;
	cout << "Introduce la nueva contrasegna: " << endl;
	cin >> contrasegna;
	while (entrada != contrasegna){
		cout << "Introduce contrasegna: ";
		cin >> entrada;
}
//-----------------------------------------------------------------------------------------------
	// EJERCICIO 2
	int edad;
	int mayor = 18;
	string respuesta = "Te quedan colacaos";

	cout << "Introduce tu edad actual: ";
	cin >> edad;
	if (edad >= mayor){
		respuesta = "Eres mayor de edad... pero te quedan colacaos";
	}
	cout << respuesta << endl;

//-----------------------------------------------------------------------------------------------
	// EJERCICIO 3
	float nota;
	string calificacion;
	cout << "Introduce tu nota con dos decimales: ";
	cin >> nota;
	if (nota < 5.00){
		calificacion = "SUSPENSO!";
	}
	if (nota >= 5.00 and nota <6.00){
		calificacion = "SUFICIENTE";
	}
	if (nota >= 6.00 and nota <8.00){
		calificacion = "BIEN";
	}
	if (nota >= 8.00 and nota <10.00){
		calificacion = "NOTABLE";
	}
	if (nota == 10.00){
		calificacion = "SOBRESALIENTE";
	}
	cout << calificacion << endl;

//-----------------------------------------------------------------------------------------------
	// EJERCICIO 4
	int numeroParOImpar;

	cout << "Introduce un numero entero: ";
	cin >> numeroParOImpar;
	if (numeroParOImpar % 2 == 0){
		cout << "PAR" << endl;
	}
	if (numeroParOImpar % 2 != 0){
		cout << "IMPAR" << endl;
	}


//-----------------------------------------------------------------------------------------------
	// EJERCICIO 5
	int miArray[20];
	int arrayPares[20];
	int max = 20;
	int l = 0;

	for (int i = 0; i < max; i++){
		cout << "Introduce el siguiente numero de la lista: ";
		cin >> miArray[i];
	}

	cout << " este es mi array: ";
	for (int j = 0; j < max; j++){
		cout << miArray[j] << ", ";
	}

	for (int k = 0; k < max; k++){
		if (miArray[k] % 2 == 0){
			arrayPares[l] = miArray[k];
			l+=1;
		}
	}

		cout << endl << " este es el array de numeros pares: ";
		for (int m = 0; m < l; m++){
			cout << arrayPares[m] << ", ";
		}



return 0;
}

/*
EJERCICIOS:
Rellena un vector con los 100 primeros numeros.
Suma de 4 en 4 los numeros y guardalos en otro vector.
*/
