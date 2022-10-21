cmake_minimum_required(VERSION 3.20)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Joueur.cpp Joueur.h Pion.cpp Pion.h Case.cpp Case.h De.cpp De.h
        Gobelet.cpp Gobelet.h Propriete.cpp Propriete.h Terrain.cpp Terrain.h)


