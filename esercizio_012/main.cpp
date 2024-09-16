/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_012/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma stampa a video le tabelle di verita' delle
 *                    operazioni booleane AND e OR.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
    std::cout << "(0 && 0) : " << (0 && 0) << std::endl;
    std::cout << "(0 && 1) : " << (0 && 1) << std::endl;
    std::cout << "(1 && 0) : " << (1 && 0) << std::endl;
    std::cout << "(1 && 1) : " << (1 && 1) << std::endl;

    std::cout << std::endl;

    std::cout << "(0 || 0) : " << (0 || 0) << std::endl;
    std::cout << "(0 || 1) : " << (0 || 1) << std::endl;
    std::cout << "(1 || 0) : " << (1 || 0) << std::endl;
    std::cout << "(1 || 1) : " << (1 || 1) << std::endl;

    return 0;
}
