//
// Created by Halaha on 18-Apr-26.
//

#ifndef TEST_C_RANDOM_H
#define TEST_C_RANDOM_H
#include <random>

namespace Random {
    inline std::random_device device;
    inline std::mt19937 rd(device());

    // random int between min and max inclusive
    inline int getInt(int min, int max) {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(rd);
    }

    // random float between 0.0 and 1.0
    inline float getFloat() {
        std::uniform_real_distribution<float> dist(0.0f, 1.0f);
        return dist(rd);
    }
}

#endif //TEST_C_RANDOM_H