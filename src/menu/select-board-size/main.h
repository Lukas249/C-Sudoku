//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef MENU_SELECT_BOARD_SIZE_MAIN_H
#define MENU_SELECT_BOARD_SIZE_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Displays a menu to select the Sudoku board size.
 *
 * @param boardSize Pointer to the variable where the selected board size will be stored.
 *
 * @return void
 */
void displaySelectBoardSizeMenu(BoardSizes *boardSize);

#endif //MENU_SELECT_BOARD_SIZE_MAIN_H
