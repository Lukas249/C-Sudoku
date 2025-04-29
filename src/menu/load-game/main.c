//
// Created by lukas on 23.04.2025.
//

#include "main.h"
#include "../../board/create/main.h"
#include "../../display/main.h"
#include "../../game/read/main.h"
#include "../new-game/main.h"

#include "../../board-sizes/board-sizes.h"
#include "../inputs/inputFilename.h"

void loadGame() {
    int **sudoku = nullptr;
    BoardSizes boardSize = SMALL_BOARD;

    bool result = false;

    while (!result) {
        char *filename = inputFilename();
        result = readGame(filename, &sudoku, &boardSize);
    }

    startGame(sudoku, boardSize);

    freeSudoku(sudoku, boardSize);
}
