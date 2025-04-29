//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef GAME_SERIALIZE_MAIN_H
#define GAME_SERIALIZE_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Serializes a Sudoku game into a string.
 *
 * @param sudoku The 2D array representing the Sudoku game to serialize.
 * @param boardSize The size of the Sudoku board.
 *
 * @return A string representing the serialized Sudoku game.
 */
char* serialize(int **sudoku, BoardSizes boardSize);

#endif //GAME_SERIALIZE_MAIN_H
