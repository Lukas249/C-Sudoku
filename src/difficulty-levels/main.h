//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef DIFFICULTY_LEVELS_MAIN_H
#define DIFFICULTY_LEVELS_MAIN_H

/**
 * @brief Checks if the provided difficulty level is valid.
 *
 * This function checks whether the given difficulty level matches one of the predefined
 * valid levels (EASY_GAME, MEDIUM_GAME, or HARD_GAME).
 *
 * @param difficultyLevel The difficulty level to check.
 *
 * @return true if the difficulty level is valid, false otherwise.
 */
bool isValidDifficultyLevel(int difficultyLevel);

#endif //DIFFICULTY_LEVELS_MAIN_H
