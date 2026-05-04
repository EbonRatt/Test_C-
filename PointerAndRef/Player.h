//
// Created by Halaha on 05-May-26.
//

#ifndef TEST_C_PLAYER_H
#define TEST_C_PLAYER_H

namespace PlayerPointer {
    struct Player {
        int Hp;
    };

    inline void AttackPlayer(Player* player, int dmg) {
        if (player != nullptr) {
            player->Hp -= dmg;
            std::cout<< "Attack -" << dmg << std::endl;
        }
        std::cout<< "Player HP: " << (player != nullptr ?  std::to_string(player->Hp) : "None") << std::endl;
    }

}

#endif //TEST_C_PLAYER_H