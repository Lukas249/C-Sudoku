//
// Created by lukas on 17.04.2025.
//

#include "main.h"

#include <math.h>
#include <stdlib.h>

#include "../../helpers/generate-array.h"
#include "../../helpers/get-random-number.h"

void fillSudokuSquare(int **sudoku, BoardSizes boardSize, int squareIndex) {
    const int squareSize = (int) sqrt(boardSize);

    int numbersCount = boardSize;
    int* numbers = generateArray(1, boardSize);

    int squareRowStart = squareIndex / squareSize;
    int squareColumnStart = squareIndex % squareSize;

    int row = squareRowStart * squareSize;
    int column = squareColumnStart * squareSize;

    for (int i = row; i < row + squareSize; i++) {
        for (int j = column; j < column + squareSize; j++) {
            int index = getRandomNumber(0, numbersCount - 1);
            sudoku[i][j] = numbers[index];
            numbers[index] = numbers[numbersCount - 1];
            numbersCount -= 1;
        }
    }

    free(numbers);
}


