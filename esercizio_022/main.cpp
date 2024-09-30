/*
 * -------------------------------------------------------------------------------------
 * Nome del file:     esercizio_022/main.cpp
 * Autore:            Leonardo Essam Dei Rossi <leonardo.deirossi@studenti.unitn.it>
 * Data di creazione: 2024-09-30
 * Descrizione:       Dati due vertici A e B e un punto C, il programma determina se il
 *                    punto C e' compreso all'interno del rettangolo di vertici A e B.
 * -------------------------------------------------------------------------------------
 */

#include <iostream>

struct Punto
{
    float x;
    float y;
} typedef Punto_t;

int main(void)
{
    Punto_t punto_a, punto_b, punto_c;

    std::cout << "Inserisci l'ascissa del punto A: ";
    std::cin >> punto_a.x;

    std::cout << "Inserisci l'ordinata del punto A: ";
    std::cin >> punto_a.y;

    std::cout << "Inserisci l'ascissa del punto B: ";
    std::cin >> punto_b.x;

    std::cout << "Inserisci l'ordinata del punto B: ";
    std::cin >> punto_b.y;

    std::cout << "Inserisci l'ascissa del punto C: ";
    std::cin >> punto_c.x;

    std::cout << "Inserisci l'ordinata del punto C: ";
    std::cin >> punto_c.y;

    std::cout << "A = (" << punto_a.x << ", " << punto_a.y << ")" << std::endl;
    std::cout << "B = (" << punto_b.x << ", " << punto_b.y << ")" << std::endl;

    if ((punto_c.x >= punto_a.x && punto_c.x <= punto_b.x) && (punto_c.y >= punto_a.y && punto_c.y <= punto_b.y))
    {
        std::cout << "Il punto C = (" << punto_c.x << ", " << punto_c.y << ") appartiene al rettangolo." << std::endl;
    }
    else
    {
        std::cout << "Il punto C = (" << punto_c.x << ", " << punto_c.y << ") non appartiene al rettangolo." << std::endl;
    }

    return 0;
}