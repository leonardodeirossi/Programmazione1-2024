/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_021/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-30
 * Descrizione:       Questo programma prende in input una lettera, maiuscola o
 *                    minuscola e stampa se si tratta di una vocale o di una consonante.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    char lettera;

    std::cout << "Inserisci la lettera: ";
    std::cin >> lettera;

    if ((int)lettera >= 65 && (int)lettera <= 90)
    {
        lettera = char(((int)lettera) + 36);
    }

    if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
    {
        std::cout << "La lettera e' una vocale." << std::endl;
    }
    else
    {
        std::cout << "La lettera e' una consonante." << std::endl;
    }

    return 0;
}