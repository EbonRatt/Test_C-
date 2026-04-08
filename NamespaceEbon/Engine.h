//
// Created by Halaha on 08-Apr-26.
//

#ifndef TEST_C_ENGINE_H
#define TEST_C_ENGINE_H

namespace Engine {
    namespace Renderer { void Draw();}
    namespace Physics  { void update(); }
    namespace Audio    { void play(); }
    namespace Input    { void poll(); }
}

#endif //TEST_C_ENGINE_H