//
// Created by lukas on 17.04.2025.
//

#include "main.h"

#include "difficulty-levels.h"

bool isValidDifficultyLevel(int difficultyLevel) {
    return difficultyLevel == EASY_GAME || difficultyLevel == MEDIUM_GAME || difficultyLevel == HARD_GAME;
}