/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_007/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma controlla se il compilatore / sistema operativo
 *                    in uso usa la codifica "little endian" o "big endian".
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
	int x;
	int *cp = &x;

	if (*cp == 1) {
		std::cout << "Little endian" << std::endl;
	} else {
		std::cout << "Big endian" << std::endl;
	}

	return 0;
}
