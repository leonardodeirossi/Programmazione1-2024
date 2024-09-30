/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_019/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-30
 * Descrizione:       Questo programma prende in input tre numeri a, b, c e restituisce
 *                    il minimo tra loro.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    int a, b, c, min;

    std::cout << "Inserisci a: ";
    std::cin >> a;

    std::cout << "Inserisci b: ";
    std::cin >> b;

    std::cout << "Inserisci c: ";
    std::cin >> c;

    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }
    else
    {
        std::cout << "Tutti i valori sono uguali!" << std::endl;
        return -1;
    }

    std::cout << "Il minimo e': " << min << std::endl;

    return 0;
}