//
// Created by phyra on 28-Mar-26.
//
#include "MaskBitWithFlag.h"
#include <cstdint>
#include <iostream>

void MaskBitWithFlag::TestingMaskBitWithFlag() {
    int inputPlayer;
    uint8_t playState = 0x00;

    uint8_t jumpState = 0x02;
    uint8_t moveState = 0x04;


    do {

        std::cout << "Input : ";
        std::cin >> inputPlayer;

        std::cout<< inputPlayer;

        switch (inputPlayer) {
            case 1 : playState |= jumpState;
                break;
            case 2 : playState |= moveState;
                break;
            case 4 : playState &= ~jumpState;
                break;
            case 3 : playState &= ~moveState;
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