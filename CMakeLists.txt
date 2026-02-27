cmake_minimum_required(VERSION 3.20)
project(Alaska2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Alaska2
        main.cpp
        Stack.cpp
        Card.cpp
        Deck.cpp
        GameState.cpp
        Card.h
        Stack.h
        Deck.h
        GameState.h
)