# include <iostream>
using namespace std;
int const TAMA = 10;

void rellenaMatrizXO(string matriz[TAMA][TAMA], int nFil, int nCol){
	int cont = 1;
	string marca;
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			if (cont % 2 == 0) {
				matriz[i][j] = "O";
			}
			else
				matriz[i][j] = "X";
			cont += 1;
		}
		cont += 1;
	}
}

void rellenaMatrizCeros(int matriz[TAMA][TAMA], int nFil, int nCol){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			matriz[i][j] = 0;
		}
	}
}

void rellenaMatrizNum(int matriz[TAMA][TAMA], int nFil, int nCol, int num){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			matriz[i][j] = num;
		}
	}
}

void printMatrix (string matriz[TAMA][TAMA], int nFil, int nCol){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			cout << matriz[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}

void printMatrix (int matriz[TAMA][TAMA], int nFil, int nCol){
	for (int i = 0; i < nFil; i++){
		for (int j = 0; j < nCol; j++){
			cout << matriz[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int const TAMA = 10;
	int array[TAMA];
	string matrizXO[TAMA][TAMA]; // [FILAS][COLUMNAS] --- Pero no siempre así.
	int matrizCeros[TAMA][TAMA];
	int matrizNum[TAMA][TAMA];
	int num = 73;


	rellenaMatrizXO (matrizXO, TAMA, TAMA);
	cout << endl << "              MATRIZ XO" << endl << endl;
	printMatrix (matrizXO, TAMA, TAMA);
	rellenaMatrizCeros (matrizCeros, TAMA, TAMA);
	cout << endl << "               MATRIZ 0" << endl << endl;
	printMatrix (matrizCeros, TAMA, TAMA);
	rellenaMatrizNum (matrizCeros, TAMA, TAMA, num);
	cout << endl << "                 MATRIZ NUMERO" << endl << endl;
	printMatrix (matrizCeros, TAMA, TAMA);


	return 0;
}