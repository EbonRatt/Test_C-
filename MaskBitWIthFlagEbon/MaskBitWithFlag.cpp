//
// Created by phyra on 28-Mar-26.
//
#include "MaskBitWithFlag.h"
#include <cstdint>
#include <iostream>

void MaskBitWithFlag::TestingMaskBitWithFlag() {
    int inputPlayer;
    uint8_t playState = 0x00;

    constexpr uint8_t jumpState = 0x02; // 0000 0010 → bit 1
    constexpr uint8_t moveState = 0x04; // 0000 0100 → bit 2

    // Left shift — clearest intent
    constexpr uint8_t mask0 { 1 << 0 };  // 0000 0001
    constexpr uint8_t mask1 { 1 << 1 };  // 0000 0010
    constexpr uint8_t mask2 { 1 << 2 };  // 0000 0100


    do {

        std::cout << "Input : ";
        std::cin >> inputPlayer;

        std::cout<< inputPlayer;

        switch (inputPlayer) {
            case 1 : playState |= jumpState;  // turn jumping ON
                break;
            case 2 : playState |= moveState; // turn moving ON
                break;
            case 4 : playState &= ~jumpState; // turn jumping OFF
                break;
            case 3 : playState &= ~moveState; // turn moving OFF
                break;
            default: break;
        }

        if ( playState & jumpState ) {
            std::cout << "Player State: Jumping \n";
        }

        if ( playState & moveState ) {
            std::cout << "Player State: Moving \n";
        }

        if ( playState & moveState & jumpState) {
            std::cout << "Player State: Doing Both \n";
        }

    }while (inputPlayer != 0);
}