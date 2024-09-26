/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_017/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-26
 * Descrizione:       Questo programma prende in input due numeri a e b e restituisce
 *                    il modulo della differenza tra i due.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>
#include <cmath>

int main(void)
{
    int a, b, risultato;

    std::cout << "Inserisci il valore di a: ";
    std::cin >> a;

    std::cout << "Inserisci il valore di b: ";
    std::cin >> b;

    risultato = std::abs(a - b);

    std::cout << "Risultato: " << risultato << std::endl;

    return 0;
}
