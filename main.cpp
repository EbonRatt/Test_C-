#include "MaskBitWIthFlagEbon/MaskBitWithFlag.h"
#include <string>
#include <iostream>
#include "NamespaceEbon/CustomHello.h"
#include "CompileTime/TestContexpr.h"
#include "Random/Random.h"

int main()
{
    auto x =  Random::getInt(1,10);
    std::cout<< x;
    return 0;
}