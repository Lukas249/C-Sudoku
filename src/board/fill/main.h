//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef BOARD_FILL_MAIN_H
#define BOARD_FILL_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * Fills one sudoku square of size √n * √n with numbers
 *
 * @param sudoku The Sudoku board.
 * @param boardSize The size of the Sudoku board.
 * @param squareIndex The index of the √n × √n square. The index ranges from 0 to n-1 and goes row by row from left to right
 *
 * @return void
 */
void fillSudokuSquare(int **sudoku, BoardSizes boardSize, int squareIndex);

#endif //BOARD_FILL_MAIN_H
