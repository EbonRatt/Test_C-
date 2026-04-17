cmake_minimum_required(VERSION 4.1)
project(Test_C++)

set(CMAKE_CXX_STANDARD 20)

add_executable(Test_C++ main.cpp
        MaskBitWIthFlagEbon/MaskBitWithFlag.cpp
        MaskBitWIthFlagEbon/MaskBitWithFlag.h
        namespaceEbon/CustomHello.h
        namespaceEbon/sayHelloCollection.cpp
        InlineAndNamespace/GameConfig.h
        InlineAndNamespace/Lobby.cpp
        InlineAndNamespace/Lobby2.cpp
        NamespaceEbon/Engine.h
        NamespaceEbon/CallEngine.cpp
        CompileTime/TestContexpr.h
        Random/Random.h
)
