# include <iostream>
using namespace std;

// FUNCIONES PARA LOS EJERCICIOS 6, 7 Y 8_____________________________

int numMayor(int num, int numMay){
	if (num > numMay) numMay = num;
	return numMay;
}

int numMenor(int num, int numMen){
	if (num < numMen) numMen = num;
	return numMen;
}

int pideNumeros(){
	int numero;
	cout << "Introduce un numero: ";
	cin >> numero;
	return numero;
}

int sumaNumeros(int nume, int tot){
	tot = tot + nume;
	return tot;
}

void clasificaNumeros(int salida){
	int num;
	int mayor = 0;
	int menor = 10000;
	int total = 0;
	int cont = 0;
	int media;
	cout << "Introduce -1 para terminar" << endl;
	num = pideNumeros();
	do{
		mayor = numMayor (num, mayor);
		menor = numMenor (num, menor);
		total = sumaNumeros(num, total);
		cont += 1;
		num = pideNumeros();
	} while (num != salida);
	media = total / cont;

	cout << "MAYOR: " << mayor << endl;
	cout << "MENOR: " << menor << endl;
	cout << "MEDIA: " << media << endl;
}

int sumaPotencias (int num){
	int sub = 2;
	int total = 0;
	int cont = 0;
	for (int i = 0; i < num; i++){
		sub = 2;
		for (int j = 0; j < cont; j++){
			sub = sub * 2;
		}
		total = total + sub;
		cont += 1;
	}
	return total;
}

void cuentaAtras(int num){
	cout << endl << "CUENTA ATRAS" << endl;
	for (num; num >= 0; num -= 1){
		cout << num << "\t";
	}
}

//---------------------------------------------------------------------------------------------------------------------------

int main() {

	int numeros = 100;
	int salto = 4;
	int arrayNumeros [numeros];
	int arraySuma [numeros/salto];
	int suma;
	int cont = 0;


	int fin = -1;
	int numero;
	int resultado;
	int descuento = 100;


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

	cout << endl;
	cout << endl;
	cout << endl;

//-----------------------------EJERCICIO 6--------------------------------------------

	clasificaNumeros(fin);

//-----------------------------EJERCICIO 7--------------------------------------------

	cout << endl;
	numero = pideNumeros();
	resultado = sumaPotencias(numero);
	cout << endl;
	cout << "2^1 + 2^2 + ... + 2^n = " << resultado << endl;

//-----------------------------EJERCICIO 8--------------------------------------------

	cuentaAtras(descuento);


return 0;
}

