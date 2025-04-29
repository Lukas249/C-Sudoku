//
// Created by lukas on 20.04.2025.
//

#include "main.h"
#include "../../board/create/main.h"
#include "../../file/open/main.h"
#include "../../file/read/main.h"
#include "../parse/main.h"

#include <stdio.h>
#include <stdlib.h>

bool readGame(char* filename, int ***sudokuOutput, BoardSizes *boardSizeOutput) {
    FILE *fp = openFile(filename, "r");

    if (fp == NULL) {
        return false;
    }

    int lineLength = 256;
    char line[lineLength];

    readLine(fp, line, lineLength);

    BoardSizes boardSize = atoi(line);

    int **sudoku = createSudoku(boardSize);

    for (int i = 0; i < boardSize; i++) {
        readLine(fp, line, lineLength);

        int *sudokuRow = parseSudokuRow(line, boardSize);

        for (int j = 0; j < boardSize; j++) {
            sudoku[i][j] = sudokuRow[j];
        }

        free(sudokuRow);
    }

    fclose(fp);

    *sudokuOutput = sudoku;
    *boardSizeOutput = boardSize;

    return true;
}
