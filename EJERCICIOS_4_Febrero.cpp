# include <iostream>
# include <stdlib.h> 
# include <time.h> 
using namespace std;

void rellenaMas5(int array[], int tam){
	srand (time (NULL));
	for(int i = 0; i < tam; i++){
		array[i] = 5 + rand()%15;
	}
}

void rellenaBin(int array[], int tam){
	srand (time(NULL));
	int num = rand()%tam;
	array[num] = 1;
}

void printArray(int array[], int tam){		//	Sólo para comprobaciones.
	cout << "\t[";
	for (int i = 0; i < tam - 1; i++){
		cout << array[i] << ", ";
	}
	cout << array[tam - 1] << "]" << endl;
}

int pideNumEntre(int num1, int num2){
	int num;
	cout << endl << "Introduce un numero entre " << num1 << " y " << num2 << ": ";
	cin >> num;
	while (num < num1 or num > num2){
		cout << endl << "Numero incorrecto." << endl << "Introduce un numero entre " << num1 << " y " << num2 << ": ";
		cin >> num;
	}
	return num;
}

void pideNumMas5(int array[],int tam, int min){  // Solicita numeros entre 1 y 10, pero...
	int numero;
	bool entra = 1;
	while (entra){
		numero = pideNumEntre(1, tam);
		array[numero-1] -= 5; 					// ... aquí lo ajusta para que afecte a la
		if (array[numero-1] < min){				// posicion entre 0 y 9. Así el "4" afectara a
			array[numero-1] = 0;				// cuarta posicion [3].
			entra = 0;
		}
	}
}

void pideNumBin(int array[], int tam, int lim){
	int numero;
	bool incorrecto = 1;
	int cont = 0;
	while (incorrecto and cont < lim){
		cont += 1;
		numero = pideNumEntre(1, tam);
		if (array[numero-1] == 1){
			incorrecto = 0;
			cout << "\t DIN!! DIN!! DINNN!!" << endl << "\t CORRECTO!!!" << endl;
		}
		else{
			cout << "\t Posicion incorrecta." << endl;
			if (cont < lim and incorrecto) cout << "\t Sigue jugando!" << endl;
			else cout << "\t Se acabo tu tiempo!" << endl;
		}
	}
}



int main() {

	int arrayMas5 [10];
	int arrayBin [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int tama = 10;
	int minimo = 5;
	int limite = 5;
	int arrayPruebas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	//-----------------------EJERCICIO 1-------------------------------------------------------

	string nombre = "Pablo de Cara Jimenez";
	cout << endl << nombre << endl;

	//-----------------------EJERCICIO 2-------------------------------------------------------

	//printArray (arrayPruebas, tama);


	rellenaMas5(arrayMas5, tama);   		//	2.1
	//printArray(arrayMas5, tama);
	rellenaBin(arrayBin, tama);				//	2.2
	//printArray(arrayBin, tama);

	//-----------------------EJERCICIO 3-------------------------------------------------------

	pideNumMas5(arrayMas5, tama, minimo);	//	3.1
	printArray(arrayMas5, tama);
	cout << endl << "OK, AHORA VAMOS A JUGAR. INTENTA ENCONTRAR LA POSICION DEL NUMERO 1" << endl << "TIENES 5 INTENTOS" << endl;
	pideNumBin(arrayBin,tama, limite);		//	3.2
	printArray(arrayBin, tama);
	
	//-----------------------EJERCICIO 4-------------------------------------------------------

	/*

	Estas son las librerías necesarias para usar la función rand:

	# include <stdlib.h> 
	# include <time.h> 

	Este es un ejemplo de su uso:

	srand (time(NULL));			Esto resetea la semilla (basada en tiempo) a partir de la cual se generarán números pseudoaleatorios.
	int num = rand()%tam;			Esto devuelve un numero de entre 1 y "tam".
								Para buscar un número entre, por ejemplo, 5 y 15
								usaremos:
								
								int num = 5 + rand()%15

	He usado la función rand porque es la que encontré hace unos días, pero parece ser que
	existen otras, como random, que genera números mejor distribuidos.


	*/
	
	return 0;
}
