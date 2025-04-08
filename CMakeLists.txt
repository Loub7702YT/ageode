cmake_minimum_required(VERSION 3.15)
project(ageode)

find_package(Geode REQUIRED)

geode_create_mod(
    main.cpp
    SpeedHack.cpp
    CheatMenu.cpp
    NoClip.cpp
)
