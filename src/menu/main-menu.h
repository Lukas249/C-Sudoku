//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "../board-sizes/board-sizes.h"
#include "../difficulty-levels/difficulty-levels.h"

/**
 * @brief Displays the main menu and allows the user to configure game settings.
 *
 * @param boardSize Pointer to the variable where the selected board size will be stored.
 * @param difficultyLevel Pointer to the variable where the selected difficulty level will be stored.
 *
 * @return void
 */
void displayMainMenu(BoardSizes *boardSize, DifficultyLevels *difficultyLevel);

#endif //MAIN_MENU_H
