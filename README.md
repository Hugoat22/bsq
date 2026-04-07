# My_bsq


My_bsq is a C project that implements the "Biggest Square" (BSQ) algorithm. The program takes a file representing a map grid with obstacles and finds the largest possible empty square within it. The found square is then marked with 'x's in the output.

This project is part of the Epitech curriculum.

## Getting Started

Follow these instructions to get a copy of the project up and running on your local machine.

### Prerequisites

You will need `make` and a C compiler like `gcc` installed on your system.

### Compilation

1.  Clone the repository:
    ```sh
    git clone https://github.com/hugoat22/bsq.git
    ```
2.  Navigate to the project directory:
    ```sh
    cd bsq
    ```
3.  Compile the project using the provided Makefile:
    ```sh
    make
    ```
    This will create an executable named `My_bsq` in the root directory.

## Usage

Run the program by passing the path to a map file as an argument:

```sh
./My_bsq <path_to_map_file>
```

### Map File Format

The map file has a specific format:
*   The first line contains a number indicating the number of rows (and columns, assuming a square map).
*   Subsequent lines represent the grid.
*   `.` (dot) represents an empty, traversable space.
*   `o` (lowercase 'o') represents an obstacle.

## Example

Given an input file `maps/map.txt` with the following content:

```
5
.o...
o...o
.....
.oo.o
..o.o
```

Run the program with this file:

```sh
./My_bsq maps/map.txt
```

The program will identify the largest empty square and print the modified map to the standard output:

```
.o...
o...o
.xx..
.xx.o
..o.o
```

## Project Structure

The repository is organized as follows:

```
.
├── include/        # Header files for the project
├── lib/            # Source for the custom 'my' C library
├── src/            # Core logic for the BSQ algorithm
│   ├── bsq.c
│   ├── check_map.c
│   ├── find_big_square.c
│   └── find_square.c
├── test/           # Example map files for testing
├── Makefile        # Main makefile for compilation
└── main.c          # Entry point of the program
