/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_005/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma richiede all'utente di inserire una distanza
 *		      in miglia e restituisce il valore in chilometri.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

#define COSTANTE_RAPPORTO 0.62137

int main() {
	float miglia, chilometri;

	std::cout << "Inserisci la distanza in miglia (anche con la virgola): ";
	std::cin >> miglia;

	chilometri = (miglia / COSTANTE_RAPPORTO);
	std::cout << "La distanza in chilometri e': " << chilometri << std::endl;

	return 0;
}
