cmake_minimum_required(VERSION 3.16)
project(Computer_Parts_System)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Computer_Parts_System main.cpp ./src/equipment.cpp ./src/composite_equipment.cpp ./src/video_card.cpp ./src/disk_drive.cpp ./src/cabinent.cpp ./src/chasis.cpp ./src/bus.cpp )

add_subdirectory(test)