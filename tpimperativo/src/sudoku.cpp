#include <iostream>
#include "sudoku.h"

using namespace std;

void sudoku_print(Tablero t) {
	cout << "-------------------";
	cout << endl;
	for (int i = 0; i < 9; i++) {
		cout << "|";
		for (int j = 0; j < 9; j++) {
			if (t[i][j] == 0) {
				cout << " ";
			} else {
				cout << t[i][j];
			}
			cout << "|";
		}
		cout << endl;
		if (i == 8) {
			cout << "+-+-+-+-+-+-+-+-+-+";
		} else {
			cout << "-------------------";
		}
		cout << endl;
	}
}

bool sudoku_esCeldaVacia(Tablero t, int f, int c) {
	bool res=false;
	if (t[f][c]==0)
		res=true;
	return res;
}
void sudoku_vaciarTablero(Tablero t) {
	unsigned int i=0;
	unsigned int j=0;
	while(i<9){
		j=0;
		while(j<9){
			t[i][j]=0;
			j++;
		}
		i++;
	}
}

int sudoku_nroDeCeldasVacias(Tablero t) {
	unsigned int i=0;
	unsigned int j=0;
	unsigned int res=0;
	while(i<9){
		j=0;
		while(j<9){
			if(sudoku_esCeldaVacia(t,i,j) ){
				res=res+1;
			}
			j++;
		}
		i++;
	}
	return res;
}

int sudoku_primerCeldaVaciaFila(Tablero t) {
	unsigned int i=0;
	unsigned int j=0;
	while(i<9){
		j=0;
		while(j<9 && t[i][j] !=0){

			j++;
		}
		i++;
	}
return i;
}

int sudoku_primerCeldaVaciaColumna(Tablero t) {
	// COMPLETAR
	return -1;
}

int sudoku_valorEnCelda(Tablero t, int f, int c) {
	return t[f][c];
}

void sudoku_llenarCelda(Tablero t, int f, int c, int v) {
	t[f][c]=v;
}

void sudoku_vaciarCelda(Tablero t, int f, int c) {
	t[f][c]=0;
}

bool sudoku_esTableroValido(Tablero t) {
	// COMPLETAR
	return false;
}

bool sudoku_esTableroParcialmenteResuelto(Tablero t) {
	// COMPLETAR
	return false;
}

bool sudoku_esTableroTotalmenteResuelto(Tablero t) {
	// COMPLETAR
	return false;
}

bool sudoku_esSubTablero(Tablero t0, Tablero t1) {
	// COMPLETAR
	return false;
}


bool sudoku_resolver(Tablero t) {
	// COMPLETAR
	return false;
}

bool sudoku_resolver(Tablero t, int& count) {
	// COMPLETAR
	return false;
}

