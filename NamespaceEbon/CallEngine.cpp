//
// Created by Halaha on 08-Apr-26.
//

#include "Engine.h"
#include <iostream>

namespace Engine {
    namespace Renderer {
        void Draw() {
            std::cout << "Renderer Draw" << std::endl;
        }
    }
    namespace Physics {
        void update() {
            std::cout << "Physics Update" << std::endl;
        }
    }
    namespace Audio {
        void play() {
            std::cout << "Audio Play" << std::endl;
        }
    }
    namespace Input {
        void poll() {
            std::cout << "Input Poll" << std::endl;
        }
    }
}