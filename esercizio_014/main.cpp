/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_014/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-23
 * Descrizione:       Questo programma prende in input i valori dei tre elementi di una
 *                    equazione di secondo grado e la risolve per x.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

int main(void)
{
    float a, b, c, risultato1, risultato2;
    float delta;

    std::cout << "Inserisci il valore di a: ";
    std::cin >> a;

    std::cout << "Inserisci il valore di b: ";
    std::cin >> b;

    std::cout << "Inserisci il valore di c: ";
    std::cin >> c;

    delta = std::pow(b, 2) - 4 * a * c;
    if (delta > 0)
    {
        risultato1 = (-b + std::sqrt(delta)) / (2 * a);
        risultato2 = (-b - std::sqrt(delta)) / (2 * a);

        std::cout << "Risultato 1: " << risultato1 << std::endl;
        std::cout << "Risultato 2: " << risultato2 << std::endl;
    }
    else
    {
        std::cout << "Delta negativo!" << std::endl;
    }

    return 0;
}
