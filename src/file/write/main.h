//
// Created by lukas on 20.04.2025.
//
#pragma once

#ifndef FILE_WRITE_MAIN_H
#define FILE_WRITE_MAIN_H

#include <stdio.h>

/**
 * @brief Writes content to the specified file.
 *
 * @param fptr A pointer to the file where content will be written.
 * @param fileContent The content to write to the file.
 *
 * @return void
 */
void writeFile(FILE *fptr, const char* fileContent);

#endif //FILE_WRITE_MAIN_H
