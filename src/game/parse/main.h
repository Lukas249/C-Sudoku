//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef GAME_PARSE_MAIN_H
#define GAME_PARSE_MAIN_H

#include "../../board-sizes/board-sizes.h"

/**
 * @brief Parses a single row of Sudoku from a string.
 *
 * @param line A string containing the Sudoku row to parse.
 * @param boardSize The size of the Sudoku board.
 *
 * @return A pointer to an array of integers representing the parsed row.
 */
int* parseSudokuRow(char *line, BoardSizes boardSize);

#endif //GAME_PARSE_MAIN_H
