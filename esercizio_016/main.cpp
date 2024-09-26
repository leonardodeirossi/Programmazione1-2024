/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_016/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-23
 * Descrizione:       Questo programma prende in input un numero e stampa a video se
 *                    il numero inserito è pari o dispari.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    int numero;

    std::cout << "Inserisci il numero: ";
    std::cin >> numero;
    
    std::cout << "Il numero " << numero << " e' " << ((numero % 2 == 0) ? "pari" : "dispari") << std::endl;

    return 0;
}
