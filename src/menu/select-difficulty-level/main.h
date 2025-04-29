//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef MENU_SELECT_DIFFICULTY_LEVEL_MAIN_H
#define MENU_SELECT_DIFFICULTY_LEVEL_MAIN_H

#include "../../difficulty-levels/difficulty-levels.h"

/**
 * @brief Displays a menu to select the Sudoku difficulty level.
 *
 * @param difficultyLevel Pointer to the variable where the selected difficulty level will be stored.
 *
 * @return void
 */
void displayDifficultyMenu(DifficultyLevels *difficultyLevel);

#endif //MENU_SELECT_DIFFICULTY_LEVEL_MAIN_H
