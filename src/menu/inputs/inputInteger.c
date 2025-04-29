//
// Created by lukas on 27.04.2025.
//

#include "inputInteger.h"

#include <stdio.h>
#include <stdlib.h>

#include "clearInputBuffer.h"

int inputInteger() {
    char buf[12];

    fgets(buf, sizeof(buf), stdin);

    clearInputBuffer();

    return atoi(buf);
}
