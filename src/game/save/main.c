//
// Created by lukas on 20.04.2025.
//

#include "main.h"
#include "../../file/close/main.h"
#include "../../file/open/main.h"
#include "../../file/write/main.h"
#include "../serialize/main.h"

#include <stdio.h>
#include <stdlib.h>

void saveGame(int **sudoku, BoardSizes boardSize, char* filename) {
    char* fileContent = serialize(sudoku, boardSize);

    FILE *file = openFile(filename, "w");

    writeFile(file, fileContent);

    closeFile(file);

    free(fileContent);
}
