cmake_minimum_required(VERSION 3.10)
project(NetworkSimulation)

set(CMAKE_CXX_STANDARD 17)

# Tambahkan semua file sumber ke dalam daftar
set(SOURCES
    src/main.cpp
    src/node.cpp
    src/link.cpp
    src/chart.cpp  # Tambahkan file ini
)

add_executable(network_simulation ${SOURCES})
