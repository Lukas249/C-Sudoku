//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef GAME_SAVE_MAIN_H
#define GAME_SAVE_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Saves the current Sudoku game to a file.
 *
 * @param sudoku The 2D array representing the Sudoku game to save.
 * @param boardSize The size of the Sudoku board.
 * @param fileName The name of the file where the game will be saved.
 *
 * @return void
 */
void saveGame(int **sudoku, BoardSizes boardSize, char* filename);

#endif //GAME_SAVE_MAIN_H
