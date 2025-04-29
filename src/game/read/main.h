//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef GAME_READ_MAIN_H
#define GAME_READ_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Reads a Sudoku game from a file.
 *
 * @param filename The name of the file containing the Sudoku game.
 * @param sudokuOutput A pointer to the 2D array where the parsed Sudoku will be stored.
 * @param boardSizeOutput A pointer to the variable where the board size will be stored.
 *
 * @return true if the game was successfully read, false otherwise.
 */
bool readGame(char* filename, int ***sudokuOutput, BoardSizes *boardSizeOutput);

#endif //GAME_READ_MAIN_H
