/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_010/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma prende in input il valore del raggio e calcola
 *                    il volume della sfera corrispondente.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

#define PI_GRECO 3.1415

int main() {
    float raggio, volume;

    std::cout << "Inserisci il raggio del cerchio: ";
    std::cin >> raggio;

    volume = (4 / 3) * PI_GRECO * std::pow(raggio, 3);

    std::cout << "Il volume della sfera e': " << volume << std::endl;

    return 0;
}
