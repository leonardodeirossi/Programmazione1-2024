/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_002/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma stampa a video le dimensioni in termini
 *		      di byte dei tipi di dato int, char e double.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
	std::cout << "Dimensioni di 'int': " << sizeof(int) << " byte" << std::endl;
	std::cout << "Dimensioni di 'char': " << sizeof(char) << " byte" << std::endl;
	std::cout << "Dimensioni di 'double': " << sizeof(double) << " byte" << std::endl;

	return 0;
}
