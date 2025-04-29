//
// Created by lukas on 17.04.2025.
//
#pragma once

#ifndef DIFFICULTY_LEVELS_H
#define DIFFICULTY_LEVELS_H

/**
 * @brief Enum representing the difficulty levels for Sudoku games.
 *
 * This enum defines three possible difficulty levels for a Sudoku game:
 * - EASY_GAME: Guarantees that there exists a solving sequence starting from a cell
 *              with only 1 possible valid number.
 * - MEDIUM_GAME: Guarantees that there exists a solving sequence starting from a cell
 *                with at most 2 valid options.
 * - HARD_GAME: Guarantees that solving can begin from a cell with at most 3 possible options.
 *
 * These difficulty levels do not mean that all cells on the board are limited to that number of options.
 * They only ensure that such a starting point exists for a valid solving sequence.
 */
typedef enum {
    EASY_GAME = 1, /**< Easy difficulty: Guarantees a valid solving path starting from a cell with at most 1 option */
    MEDIUM_GAME = 2, /**< Medium difficulty: Guarantees a valid solving path starting from a cell with at most 2 option */
    HARD_GAME = 3 /**< Hard difficulty: Guarantees a valid solving path starting from a cell with at most 3 option */
} DifficultyLevels;

#endif //DIFFICULTY_LEVELS_H
