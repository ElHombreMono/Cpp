# include <iostream>
# include <stdlib.h> 
# include <time.h> 
using namespace std;

int decimalAOctal(int numD){
	int array [20];
	int multi = 1;
	int numO = 0;
	int cont = 0;
	while (numD >= 8){
		array[cont] = numD % 8;
		numD = (numD - (numD % 8)) / 8;
		cont += 1;
	}
	array[cont] = numD;
	for (int i = 0; i <= cont; i++){
		numO = numO + (array[i] * multi);
		multi *= 10;
	}
	return numO;
}

string pasaLista(string lista1[5], string lista2[5]){
	int cont = 0;
	for (int i = 0; i < 5; i++){
		string falta = "";
		cout <<endl << "(s/n) ?Ha venido " << lista1[i] << "?" << endl;
		cin >> falta;
		if (falta == "n"){
			lista2[cont] = lista1[i];
			cont += 1;
		}
	}
}


int main() {

	//-----------------------EJERCICIO 1-------------------------------------------------------

	string nombre = "Pablo de Cara Jimenez";
	cout << endl << nombre << endl;

	//-----------------------EJERCICIO 2-------------------------------------------------------

	string insultos [4] = {"maldito pepino rancio!!", "imbecil traga algas!!", "estupido mejillon arenoso!!", "escualido masca medusas!!"};
	string entrada = "";
	cout << "Dale al pulpo cangrejos, centollos, bogabantes o langostas." << endl;
	while (entrada != "cangrejo" and entrada != "bogabante" and entrada != "centollo" and entrada != "langosta"){
		srand(time(NULL));  // Innecesario pero interesate
		int num = rand()%4;
		cout << "Dame comida, " << insultos[num] << endl;
		cin >> entrada;
	}
	cout << "PACU! PACU!" << endl << endl;

	//-----------------------EJERCICIO 3-------------------------------------------------------

	int numDeci;
	cout << "Introduce un numero entero: ";
	cin >> numDeci;
	int numOctal = decimalAOctal(numDeci);
	cout << "NumOctal: " << numOctal << endl;

	//-----------------------EJERCICIO 4-------------------------------------------------------

	string faltas [5];
	string pulpos [5] = {"Alfonso", "Bernardo", "Cecilio", "Daniel", "Esteban"};
	cout << "A ver mis pulpitos: " << endl;
	pasaLista(pulpos, faltas);
	cout << endl << "Han faltado: " << endl;
	for (int i = 0; i < sizeof(faltas)/sizeof(faltas[0]); i++){ //Esto no sé cómo resolverlo de otra forma.
		cout << "\t" << faltas[i] << endl;
	}

	//-----------------------EJERCICIO 5-------------------------------------------------------

	int peceras[8] = {23, 74, 92, 64, 27, 13, 84, 73};
	int pecerasOrg[8];
	int aSumar = 0;

	for (int i = 0; i < 8; i++){
		int num = peceras[i] + aSumar;
		aSumar = num % 3;
		int queda = num - aSumar;
		pecerasOrg[i] = queda;
	}

	cout << "Las peceras bien repartidas quedan asi: [";
	for (int i = 0; i < 7; i++){
		cout << pecerasOrg[i] << ",";
	}
	cout << pecerasOrg[7] << "]" << endl;

	// Lo dejo sin funciones porque me está dando un millón de problemas y me estoy volviendo loco.

	return 0;
}