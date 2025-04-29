//
// Created by lukas on 17.04.2025.
//

#include "main.h"
#include "../../board-sizes/main.h"

#include <stdio.h>

#include "../print-menu.h"
#include "../inputs/inputInteger.h"

void displaySelectBoardSizeMenu(BoardSizes *boardSize) {
    printf("Rozmiary planszy\n");
    printMenuSeparator();
    printf("Aktulanie wybrany %dx%d\n", *boardSize, *boardSize);
    printMenuSeparator();
    printf("%d - Plansza %dx%d\n", SMALL_BOARD, SMALL_BOARD, SMALL_BOARD);
    printf("%d - Plansza %dx%d\n", MEDIUM_BOARD, MEDIUM_BOARD, MEDIUM_BOARD);
    printf("%d - Plansza %dx%d\n", LARGE_BOARD, LARGE_BOARD, LARGE_BOARD);

    *boardSize = -1;

    while (!isValidBoardSize(*boardSize)) {
        printMenuSeparator();
        printf("Wybierz rozmiar planszy (4, 9 lub 16):\n");
        *boardSize = inputInteger();
    }
}
