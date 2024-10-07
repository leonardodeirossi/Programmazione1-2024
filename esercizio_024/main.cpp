/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_024/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-10-07
 * Descrizione:       Questo programma prende in input due valori numerici e stampa
 *                    tutti i caratteri ASCII compresi tra i due valori.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    int a, b;

    std::cout << "Inserisci il valore ASCII di partenza: ";
    std::cin >> a;

    std::cout << "Inserisci il valore ASCII di arrivo: ";
    std::cin >> b;

    if (a < b && a >= 0 && b <= 127)
    {
        for (int i = a; i <= b; i++)
        {
            std::cout << "Carattere " << i << ": " << char(i) << std::endl;
        }
    }
    else
    {
        std::cout << "Range [a, b] [" << a << ", " << b << "] non valido!" << std::endl;
    }

    return 0;
}
