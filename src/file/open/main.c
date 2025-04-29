//
// Created by lukas on 20.04.2025.
//

#include "main.h"

FILE* openFile(const char *filename, const char *mode) {
    return fopen(filename, mode);
}
