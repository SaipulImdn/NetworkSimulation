# Network Simulation

## Description

A simple network simulation in C++ that includes nodes and links. Nodes can send data through links connecting them to other nodes.

## Folder Structure

- `src/`: Contains source code.
  - `main.cpp`: Entry point of the program.
  - `node.cpp` / `node.h`: Implementation and header for the Node class.
  - `link.cpp` / `link.h`: Implementation and header for the Link class.
  - `chart.cpp` / `chart.h`: Implementation and header for the Chart class (for displaying bar charts).
- `CMakeLists.txt`: CMake configuration file for building the project.

## Building

1. Create a build directory: `mkdir build`
2. Navigate to the build directory: `cd build`
3. Run CMake: `cmake ..`
4. Build the project: `make`

## Running

Execute the resulting file: `./network_simulation`
