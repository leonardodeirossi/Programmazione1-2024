/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_001/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma richiede all'utente di inserire un
 *                    carattere o un numero e lo visualizza come output.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
	char carattere;
	std::cout << "Inserisci un numero o un carattere:";
	std::cin >> carattere;

	std::cout << "Hai inserito: " << carattere << std::endl;

	return 0;
}
