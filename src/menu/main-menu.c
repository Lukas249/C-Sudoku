//
// Created by lukas on 17.04.2025.
//

#include "main-menu.h"

#include <stdio.h>
#include <stdlib.h>

#include "print-menu.h"
#include "../board/create/main.h"
#include "../board/generate/main.h"
#include "inputs/inputFilename.h"
#include "inputs/inputInteger.h"
#include "instructions/main.h"
#include "load-game/main.h"
#include "new-game/main.h"
#include "select-board-size/main.h"
#include "select-difficulty-level/main.h"

void displayMainMenu(BoardSizes *boardSize, DifficultyLevels *difficultyLevel) {
    enum Options {
        NEW_GAME = 1,
        LOAD_GAME,
        CHOOSE_BOARD_SIZE,
        CHOOSE_DIFFICULTY_LEVEL,
        INSTRUCTION,
        EXIT
    };

    enum Options option = NEW_GAME;

    while (option != EXIT) {
        printf("Sudoku - Menu\n");
        printMenuSeparator();
        printf("1 - Nowa gra\n");
        printf("2 - Wczytaj gre\n");
        printf("3 - Wybor rozmiaru planszy\n");
        printf("4 - Wybor poziomu trudnosci\n");
        printf("5 - Instrukcja\n");
        printf("6 - Wyjscie\n");

        option = -1;

        while (option < 1 || option > 6) {
            printMenuSeparator();
            printf("Wybierz opcje od 1 do 6:\n");
            option = inputInteger();
        }

        if (option == NEW_GAME) {
            int **sudoku = generateSolvableSudoku(*boardSize, *difficultyLevel);
            startGame(sudoku, *boardSize);
            freeSudoku(sudoku, *boardSize);
        } else if (option == LOAD_GAME) {
            loadGame();
        } else if (option == CHOOSE_BOARD_SIZE) {
            displaySelectBoardSizeMenu(boardSize);
        } else if (option == CHOOSE_DIFFICULTY_LEVEL) {
            displayDifficultyMenu(difficultyLevel);
        } else if (option == INSTRUCTION) {
            displayInstructions();
        }
    }
}
