//
// Created by lukas on 20.04.2025.
//

#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

char* serialize(int **sudoku, BoardSizes boardSize) {
    int maxDigitsCount = floor(log10(boardSize)) + 1;

    char *fileContent = malloc(1 + maxDigitsCount + 1 + (maxDigitsCount + 1)*boardSize*boardSize);

    int offset = 0;

    offset += sprintf(fileContent + offset, "%d\n", boardSize);

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            offset += sprintf(fileContent + offset, "%d-", sudoku[i][j]);
        }
        offset--;
        offset += sprintf(fileContent + offset, "\n");
    }

    offset += sprintf(fileContent + offset, "\0");

    return fileContent;
}
