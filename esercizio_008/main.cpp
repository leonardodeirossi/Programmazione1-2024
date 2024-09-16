/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_008/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma prende in input il valore del raggio e ne calcola
 *                    la relativa area e circonferenza.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

#define PI_GRECO 3.1415

int main() {
    float raggio, circonferenza, area;

    std::cout << "Inserisci il raggio del cerchio: ";
    std::cin >> raggio;

    circonferenza = 2 * PI_GRECO * raggio;
    area = PI_GRECO * std::pow(raggio, 2);

    std::cout << "La circonferenza del cerchio e': " << circonferenza << std::endl;
    std::cout << "L'area del cerchio e': " << area << std::endl;

    return 0;
}
