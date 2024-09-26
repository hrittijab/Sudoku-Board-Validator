# Sudoku-Board-Validator
This project implements a Sudoku board validator that checks if a given 9x9 Sudoku board is valid according to Sudoku rules. The validation checks if each row, column, and 3x3 box contains the numbers 1 through 9 exactly once.

## Features

- **Row Validation**: Ensures each row contains unique numbers from 1 to 9.
- **Column Validation**: Ensures each column contains unique numbers from 1 to 9.
- **Box Validation**: Ensures each 3x3 box contains unique numbers from 1 to 9.

## Usage
**Input Format**:
   - The program expects input in the form of 27 integers, representing the Sudoku board in a compact 3-column format for each of the 9 rows. Each integer is a three-digit number where:
     - The hundreds digit corresponds to the first cell in the 3-column representation,
     - The tens digit corresponds to the second cell,
     - The units digit corresponds to the third cell.
# function info
- `bubblesort()`: Sorts an array to check if it contains numbers 1 to 9.
- `arraychecker()`: Checks if an array contains numbers 1 to 9.
- `rowchecker()`: Validates each row in the Sudoku board.
- `colchecker()`: Validates each column in the Sudoku board.
- `boxchecker()`: Validates each 3x3 box in the Sudoku board.
- `main()`: Handles input and checks the validity of the Sudoku board.
