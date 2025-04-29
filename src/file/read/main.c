//
// Created by lukas on 20.04.2025.
//

#include "main.h"

#include <stdio.h>

void readLine(FILE *fp, char *line, int lineLength) {
    fgets(line, lineLength, fp);
}
