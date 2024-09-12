/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_006/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-12
 * Descrizione:       Questo programma richiede all'utente di inserire la dimensione
 *                    del lato di une esagono e ne restituisce perimetro e area.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

int main() {
	float lato, sqrt3, perimetro, area;
	sqrt3 = sqrt(3);

	std::cout << "Inserisci la dimensione del lato: ";
	std::cin >> lato;

	perimetro = lato * 6;
	area = 3 * ((lato * lato) / 2) * sqrt3;

	std::cout << "Il perimetro e': " << perimetro << std::endl;
	std::cout << "L'area e': " << area << std::endl;

	return 0;
}
