//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef MENU_NEW_GAME_MAIN_H
#define MENU_NEW_GAME_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Starts the Sudoku game.
 *
 * @param sudoku The 2D array representing the Sudoku board.
 * @param boardSize The size of the Sudoku board.
 *
 * @return void
 */
void startGame(int **sudoku, BoardSizes boardSize);

#endif //MENU_NEW_GAME_MAIN_H
