//
// Created by lukas on 17.04.2025.
//

#include "main.h"
#include "../../difficulty-levels/main.h"

#include "../print-menu.h"

#include <stdio.h>

#include "../inputs/inputInteger.h"


void displayDifficultyMenu(DifficultyLevels *difficultyLevel) {
    printf("Poziomy trudnosci\n");
    printMenuSeparator();
    printf("Aktulanie wybrany poziom %d\n", *difficultyLevel);
    printMenuSeparator();
    printf("Poziomy trudnosci - liczba mozliwych wartosci w komorce startowej poprawnej sekwencji rozwiazania Sudoku:\n");
    printf("%d - poziom latwy\n", EASY_GAME);
    printf("%d - poziom sredni\n", MEDIUM_GAME);
    printf("%d - poziom trudny\n", HARD_GAME);
    printMenuSeparator();

    *difficultyLevel = -1;

    while (!isValidDifficultyLevel(*difficultyLevel)) {
        printMenuSeparator();
        printf("Wybierz poziom trudnosci (%d, %d lub %d):\n", EASY_GAME, MEDIUM_GAME, HARD_GAME);
        *difficultyLevel = inputInteger();
    }
}
