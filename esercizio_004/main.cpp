/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_004/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma richiede all'utente due numeri ed esegue
 *                    le quattro operazioni di base, stampandone i risultati.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
	int num1;
	float num2;

	std::cout << "Inserisci il primo numero (decimale): ";
	std::cin >> num1;

	std::cout << "Inserisci il secondo numero (con la virgola): ";
	std::cin >> num2;

	std::cout << "La somma dei due numeri e': " << (num1 + num2) << std::endl;
	std::cout << "La differenza tra i due numeri e': " << (num1 - num2) << std::endl;
	std::cout << "Il prodotto tra i due numeri e': " << (num1 * num2) << std::endl;
	std::cout << "Il rapporto tra i due numeri e': " << (num1 / num2) << std::endl;

	return 0;
}
