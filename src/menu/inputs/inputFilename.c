//
// Created by lukas on 23.04.2025.
//

#include "inputFilename.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "clearInputBuffer.h"

char* inputFilename() {
    int maxLength = 1024;

    char* filename = malloc(maxLength);

    printf("Podaj sciezke do pliku (max %d znakow): ", maxLength);

    fgets(filename, maxLength, stdin);

    clearInputBuffer();

    filename[strcspn(filename, "\n")] = '\0';

    return filename;
}
