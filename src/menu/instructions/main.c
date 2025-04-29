//
// Created by lukas on 18.04.2025.
//

#include "main.h"

#include <stdio.h>
#include "../print-menu.h"

#include "../../board-sizes/board-sizes.h"
#include "../../difficulty-levels/difficulty-levels.h"
#include "../../helpers/wait-for-enter.h"

void displayInstructions() {
    printf("INSTRUKCJE\n");

    printMenuSeparator();
    printf("N - rozmiar sudoku na przyklad 4, 9, 16\n");
    printf("M - rozmiar jednego kwadratu sudoku - pierwiastek z N\n");
    printf("N^2 - liczba wszystkich pol w sudoku\n");
    printMenuSeparator();
    printf("ZASADY GRY\n");
    printf("Kwadratowa plansza jest podzielona na N identycznych kwadratow o wymiarach M x M - w kazdym z nich znajduje sie N komorek.\n");
    printf("Twoim zadaniem jest wypelnienie wszystkich komorek planszy cyframi od 1 do N.\n");
    printf("W kazdym wierszu, kazdej kolumnie i kazdym kwadracie M x M dana liczba moze wystepowac jedynie raz.\n");
    printMenuSeparator();
    printf("NOWA GRA\n");
    printf("Plansza zostanie stworzone zgodnie z ustawionym rozmiarem planszy oraz poziomem trudnosci.\n");
    printMenuSeparator();
    printf("WCZYTAJ GRE\n");
    printf("Plansza zostanie wczytana z podanego pliku.\n");
    printMenuSeparator();
    printf("ROZMIAR PLANSZY\n");
    printf("W menu 'Wybor rozmiaru planszy' mozna wybrac jeden z trzech rozmiarow: %d, %d lub %d.\n", SMALL_BOARD, MEDIUM_BOARD, LARGE_BOARD);
    printMenuSeparator();
    printf("POZIOM TRUDNOSCI\n");
    printf("Poziom trudnosci Sudoku okreslany jest na podstawie liczby mozliwych wartosci w komorce poczatkowej poprawnej sekwencji rozwiazania.\n");
    printf("Dla poziomu trudnosci rownego 1 (latwy), istnieje przynajmniej jedna poprawna sciezka rozwiazywania Sudoku, ktora rozpoczyna sie od komorki majacej co najwyzej jedna mozliwa wartosc do wpisania.\n");
    printf("W menu 'Wybor poziomu trudnosci' mozna wybrac jeden z trzech poziomow: %d, %d lub %d.\n", EASY_GAME, MEDIUM_GAME, HARD_GAME);
    printMenuSeparator();

    waitForEnter();
}
