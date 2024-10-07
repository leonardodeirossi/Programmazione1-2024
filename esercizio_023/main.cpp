/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_023/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-10-07
 * Descrizione:       Questo programma stampa tutte le lettere dell'alfabeto minuscole
 *                    e maiuscole utilizzando i loro valori ASCII.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    int inizio = 65, fine = 90;

    for (int lettera = inizio; lettera <= fine; lettera++)
    {
        std::cout << (char)lettera << " - " << (char)(lettera + 32) << std::endl;
    }

    return 0;
}
