#include "MaskBitWIthFlagEbon/MaskBitWithFlag.h"
#include <string>
#include <iostream>
#include "NamespaceEbon/CustomHello.h"
#include "CompileTime/TestContexpr.h"
#include "Random/Random.h"
#include "TypeAliases/Player.h"
#include "Template/TestTemplate.h"
#include "PointerAndRef/Player.h"

int main()
{
    PlayerPointer::Player player {100};
    PlayerPointer::AttackPlayer(&player,10);
    PlayerPointer::AttackPlayer(&player,10);

    return 0;
}