//
// Created by Halaha on 08-Apr-26.
//
#pragma once

// Using the constexpr can prevent that
// if not using it so the linker will conflict
// why cuz of the MAX_PLAYER is Lobby and Lobby2 cpp are include it
// so the linker will be confusing
namespace GameConfig {
    constexpr int MAX_PLAYER = 2;
    inline float GAME_SPEED = 1.0f;

    // Best Practice
    inline constexpr int MIN_PLAYER = 1;

}

