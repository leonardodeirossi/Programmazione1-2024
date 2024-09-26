/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_018/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-26
 * Descrizione:       Questo programma prende in input un numero intero e restituisce
 *                    il precedente e il successivo del numero.
 * -------------------------------------------------------------------------------------
 */
#include <iostream>

int main(void) {
    int numero, precedente, successivo;

    std::cout << "Inserisci il numero: ";
    std::cin >> numero;

    precedente = (numero - 1);
    successivo = (numero + 1);

    std::cout << precedente << " < " << numero << " < " << successivo << std::endl;
    return 0;
}
