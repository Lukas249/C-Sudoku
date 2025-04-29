//
// Created by lukas on 18.04.2025.
//
#pragma once

#ifndef IS_SUDOKU_SOLVED_H
#define IS_SUDOKU_SOLVED_H

#include "../board-sizes/board-sizes.h"

/**
 * @brief Checks if the Sudoku game is solved.
 *
 * @param sudoku The 2D array representing the Sudoku board.
 * @param boardSize The size of the Sudoku board.
 *
 * @return true if the Sudoku is solved, false otherwise.
 */
bool isSudokuSolved(int **sudoku, BoardSizes boardSize);

#endif //IS_SUDOKU_SOLVED_H
