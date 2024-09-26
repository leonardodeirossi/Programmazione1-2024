/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_015/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-23
 * Descrizione:       Questo programma prende in input un prezzo netto e un valore
 *                    percentuale (IVA) e ne calcola il prezzo lordo.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    float prezzo, iva, prezzo_finale;

    std::cout << "Inserisci il prezzo in euro: ";
    std::cin >> prezzo;

    std::cout << "Inserisci la percentuale di IVA: ";
    std::cin >> iva;

    prezzo_finale = prezzo + (prezzo * (iva / 100));

    std::cout << "Il prezzo con l'IVA e': " << prezzo_finale << std::endl;
    return 0;
}
