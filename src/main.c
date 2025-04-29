#include <stdlib.h>
#include <time.h>
#include "display/main.h"

#include "board-sizes/board-sizes.h"
#include "difficulty-levels/difficulty-levels.h"
#include "menu/main-menu.h"


int main(void) {
    srand(time(nullptr));

    BoardSizes boardSize = MEDIUM_BOARD;
    DifficultyLevels difficultyLevel = MEDIUM_GAME;

    displayMainMenu(&boardSize, &difficultyLevel);

    return 0;
}
