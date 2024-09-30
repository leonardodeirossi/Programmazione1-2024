/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_020/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-30
 * Descrizione:       Questo programma prende in input gli estremi di un insieme e un
 *                    valore c, poi restituisce -1, 0, 1 i base alla relazione tra loro.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main(void)
{
    int a, b, c;

    std::cout << "Inserisci a: ";
    std::cin >> a;

    std::cout << "Inserisci b: ";
    std::cin >> b;

    std::cout << "Inserisci c: ";
    std::cin >> c;

    if (b <= a && a <= c)
    {
        std::cout << "-1" << std::endl;
    }
    else if (a < b)
    {
        std::cout << "1" << std::endl;
    }
    else if (a > c)
    {
        std::cout << "0" << std::endl;
    }
    else
    {
        std::cout << "Valore non valido!" << std::endl;
        return -1;
    }

    return 0;
}