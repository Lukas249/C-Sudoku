//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef FILE_OPEN_MAIN_H
#define FILE_OPEN_MAIN_H

#include <stdio.h>

/**
 * @brief Opens a file with the specified mode.
 *
 * @param filename The name of the file to open.
 * @param mode The mode in which to open the file (e.g., "r", "w").
 *
 * @return A pointer to the opened file.
 */
FILE* openFile(const char *filename, const char *mode);

#endif //FILE_OPEN_MAIN_H
