/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_003/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma effettua la somma tra due numeri interi
 *		      forniti dall'utente.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
	int num1, num2;

	std::cout << "Inserisci il primo nuemero: ";
	std::cin >> num1;

	std::cout << "Inserisci il secondo numero: ";
	std::cin >> num2;

	std::cout << "La somma dei due numeri e': " << (num1 + num2) << std::endl;

	return 0;
}
