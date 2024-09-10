# Skyscrapers puzzle solver

This is a code created to solve the Skyscrapers Puzzle, it was made during the **42 piscine** where I was learning the basics of **C language**. I'll try to make this README the more explanatory and detailed as possible, so I can show what was the logic used to solve this problem, and the main point to study with this project.

## What is the Skyscrapers Puzzle?
This is a logic-based game, where players fill in a grid with skyscrapers of varying heights, based on certain visibility rules. The puzzle challenges your ability to think critically and make deductions to complete the grid accurately.

### Game setup and rules
* The grid is usually square (e.g., 4x4, 5x5, or 6x6). In the case of this code, it can only solve boards from **4x4 to 6x6**.
* The numbers along the edges of the grid indicate how many skyscrapers you can see from that direction. That means if you have a **1** in some edge, the skyscraper to be placed next to it is a **4 height skyscraper**, because the 1 means you can only see 1 skyscraper in this point of view. If you see a **4** in some edge that means you need to place the skyscrapers in ascending order in this line/column **(1, 2, 3, 4)**, because the 4 means you can see 4 skyscrapers from this point of view.
* Each cell within the grid must contain a skyscraper of a **unique height** from 1 to N, where N is the size of the grid (e.g., in a 4x4 grid, each row and column will have skyscrapers with heights 1, 2, 3, and 4). And you **cannot** repeat a skyscraper of the same height in the same line or column.

#### This is an empty board to help illustrate the initial setup.
<img src="assets/empty_board.png" height=40% width=40%>

#### This is the same board but filled with the correct answer.
<img src="assets/solved_board.png" height=40% width=40%>

Note that it doesn't have **repeated** numbers in the same line or columns and all point of views are correctly **satisfied**.

## The Backtracking Algorithmn
To solve this puzzle it was used the [Backtracking algorithmn](https://en.wikipedia.org/wiki/Backtracking), it is a **recursive algorithm** used to solve constraint satisfaction problems, such as (Sudoku, Skyscrapers, Maze, etc.) or combinatorial problems, by exploring **all potential solutions** and abandoning solutions that violate the problem's constraints (known as backtracking). It systematically searches for a solution by attempting partial solutions and "backtracking" when a conflict or dead-end is encountered.

In our case the constrainsts are simple:
* Not repeating numbers in the same line or column;
* Respecting the given numbers of point of views.

## Project Structure

* `include/`: This folder is used to store all header files created to reuse functions from one file into another. Each file has it's own header file.
* `src/`: This folder is used to store all source code created in this project, here is the logic of how to solve the puzzle.
* `Makefile`: This file is used to help compiling the code and I also created some make commands to help testing the code.

## Code explanation