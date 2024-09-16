/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_011/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma prende in input due valori, ne fa la divisione
 *                    e restituisce il quoziente e il resto.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

int main() {
    int dividendo, divisore, quoziente, resto;

    std::cout << "Inserisci il dividendo: ";
    std::cin >> dividendo;

    std::cout << "Inserisci il divisore: ";
    std::cin >> divisore;

    quoziente = std::round(dividendo / divisore);
    resto = (dividendo % divisore);

    std::cout << "Il quoziente e': " << quoziente << std::endl;
    std::cout << "Il resto e': " << resto << std::endl;

    return 0;
}

