/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_009/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-16
 * Descrizione:       Questo programma prende in input il valore di una temperatura
 *                    espressa in gradi Fahrenheit e la converte in gradi Celsius.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

int main() {
    const int sottraendo = 32;
    const float divisore = 1.8;

    float temp_f, temp_c;

    std::cout << "Inserisci la temperatura in Fahrenheit: ";
    std::cin >> temp_f;

    temp_c = (temp_f - sottraendo) / divisore;

    std::cout << "Temperatura in gradi Celsius: " << temp_c << std::endl;

    return 0;
}
