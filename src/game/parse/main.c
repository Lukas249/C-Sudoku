//
// Created by lukas on 20.04.2025.
//

#include "main.h"

#include <stdlib.h>
#include <string.h>

int* parseSudokuRow(char *line, BoardSizes boardSize) {
    char *number = strtok(line, "-");

    int* sudokuRow = malloc(boardSize * sizeof(int));

    for (int i = 0; i < boardSize; i++) {
        sudokuRow[i] = atoi(number);
        number = strtok(nullptr, "-");
    }

    return sudokuRow;
}