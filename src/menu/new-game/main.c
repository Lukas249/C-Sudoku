//
// Created by lukas on 17.04.2025.
//

#include "main.h"
#include "../../solver/main.h"
#include "../../board/create/main.h"
#include "../../board/fill/main.h"
#include "../../board/generate/main.h"

#include "../../display/main.h"
#include "../../file/open/main.h"
#include "../../file/read/main.h"
#include "../../game/parse/main.h"
#include "../../game/read/main.h"
#include "../../game/save/main.h"
#include "../../validate/main.h"

#include <stdlib.h>
#include <stdio.h>

#include "../print-menu.h"
#include "../../board/empty-cell.h"
#include "../../helpers/wait-for-enter.h"
#include "../../solver/is-sudoku-solved.h"
#include "../inputs/inputFilename.h"
#include "../inputs/inputInteger.h"

void makeMove(int **sudoku, BoardSizes boardSize) {
    int row = -1;
    int column = -1;
    int number = -1;

    while (!isValidSudokuRow(sudoku, boardSize, row)) {
        printf("Wpisz numer wiersza 1-%d: ", boardSize);
        row = inputInteger() - 1;
        printMenuSeparator();
    }

    while (!isValidSudokuColumn(sudoku, boardSize, column)) {
        printf("Wpisz numer kolumny 1-%d: ", boardSize);
        column = inputInteger() - 1;
        printMenuSeparator();
    }

    while (!isValidNumber(boardSize, number) || !isValidPositionToAddNumber(sudoku, boardSize, row, column, number)) {
        printf("Wpisz liczbe 1-%d (%d oznacza pole puste): ", boardSize, EMPTY_CELL_SUDOKU);
        number = inputInteger();
    }

    sudoku[row][column] = number;
}

typedef enum {
    GAME_OPTION_MAKE_MOVE = 1,
    GAME_OPTION_SAVE,
    GAME_OPTION_EXIT
} GameOptions;

GameOptions displayGameMenu() {
    GameOptions option = -1;

    while (option < 1 || option > 3) {
        printMenuSeparator();
        printf("1 - Wykonaj ruch\n");
        printf("2 - Zapisz gre\n");
        printf("3 - Wyjdz\n");
        printMenuSeparator();

        printf("Wybierz opcje:\n");
        option = inputInteger();
    }

    return option;
}

void startGame(int **sudoku, BoardSizes boardSize) {
    GameOptions option = GAME_OPTION_MAKE_MOVE;

    while(!isSudokuSolved(sudoku, boardSize) && option == GAME_OPTION_MAKE_MOVE) {
        printSudoku(sudoku, boardSize);
        option = displayGameMenu();

        if (option == GAME_OPTION_MAKE_MOVE) {
            makeMove(sudoku, boardSize);
        }
    }

    if (option == GAME_OPTION_EXIT) {
        return;
    } else if (option == GAME_OPTION_SAVE) {
        char *filename = inputFilename();
        saveGame(sudoku, boardSize, filename);
        free(filename);

        printf("Gra zapisana!\n\n");
        return;
    }

    printSudoku(sudoku, boardSize);

    printf("Poprawnie rozwiazales sudoku!\n");
    waitForEnter();
}
