//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef FILE_READ_MAIN_H
#define FILE_READ_MAIN_H

#include <stdio.h>

/**
 * @brief Reads a line from the given file.
 *
 * @param fp A pointer to the file to read from.
 * @param line A buffer to store the read line.
 * @param lineLength The maximum length of the line to read.
 *
 * @return void
 */
void readLine(FILE *fp, char *line, int lineLength);

#endif //FILE_READ_MAIN_H
