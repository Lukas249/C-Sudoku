//
// Created by lukas on 18.04.2025.
//

#include "is-sudoku-solved.h"

#include "../board/empty-cell.h"
#include "../validate/main.h"

bool isSudokuSolved(int **sudoku, BoardSizes boardSize) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (sudoku[i][j] == EMPTY_CELL_SUDOKU) {
                return false;
            }
        }
    }

    return isSudokuValid(sudoku, boardSize);
}
