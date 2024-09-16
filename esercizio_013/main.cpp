/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_013/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma prende in input un carattere da tastiera e ne
 *                    restituisce il corrispettivo in minuscolo.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
    char carattere_M, carattere_m;

    std::cout << "Inserisci il carattere: ";
    std::cin >> carattere_M;

    if ((int) carattere_M  >= 65 && (int) carattere_M <= 90) {
        carattere_m = char((int) carattere_M + 32);
        std::cout << "Il carattere in minuscolo e': " << carattere_m << std::endl;
    } else {
        std::cout << "Hai inserito un carattere non valido!" << std::endl;
    }

    return 0;
}

