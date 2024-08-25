
# C++ Programming Examples

## 1. Rock-Paper-Scissors Game

### Overview
This program simulates a classic Rock-Paper-Scissors game between two players.

### How It Works
- **Input:** Each player is prompted to enter their choice using numbers:
  - `1` for Rock
  - `2` for Paper
  - `3` for Scissors
- **Output:**
  - If both players choose the same option, the game results in a tie.
  - Rock beats Scissors.
  - Scissors beat Paper.
  - Paper beats Rock.
- **Invalid Input:**
  - If either player enters a number outside the range `1-3`, the program will display an error message indicating that the input is invalid.

## 2. Palindrome Checker

### Overview
This program checks if a given number is a palindrome. A palindrome is a number that reads the same backward as forward.

### How It Works
- **Input:** The user is prompted to enter a number.
- **Processing:** The program calculates the reverse of the given number and compares it to the original number to determine if it is a palindrome.
- **Output:**
  - The reverse of the entered number is displayed.
  - The program indicates whether the number is a palindrome or not.

## 3. Ceiling Value Calculator

### Overview
This program computes the ceiling value of a floating-point number entered by the user. The ceiling of a number is the smallest integer greater than or equal to that number.

### How It Works
- **Input:** The user is prompted to enter a floating-point number.
- **Processing:** The program uses the `ceil()` function from the `<cmath>` library to calculate the ceiling value of the given number.
- **Output:** The program displays the ceiling value of the entered number.

## 4. Shape Identifier

### Overview
This program takes the coordinates of four points as input and determines whether the points form a square, rectangle, or parallelogram.

### How It Works
- **Input:** The user is prompted to enter the coordinates of four points in the Cartesian plane.
- **Processing:**
  - The program calculates the lengths of the four sides formed by these points using the distance formula.
  - It then checks:
    - If opposite sides are equal, the points form a rectangle or parallelogram.
    - If all sides are equal, the points form a square.
- **Output:** The program will display whether the points form a square, rectangle, or parallelogram.

## 5. Floor Value Calculator

### Overview
This program computes the floor value of a given decimal number using the `floor()` function in C++.

### How It Works
- **Input:** The user is prompted to enter a decimal number.
- **Processing:** The program uses the `floor()` function from the `<cmath>` library to compute the floor value.
  - The floor value of a number is the largest integer less than or equal to the given number.
- **Output:** The program displays the floor value of the entered decimal number.

## 6. Max and Min Number Comparator

### Overview
This program compares two numbers entered by the user to determine which is larger and which is smaller. It also counts how many times the user entered the maximum and minimum values. The program continues to accept input until the user enters `-1` for either number, which stops the program.

### How It Works
- **Input:** The user is prompted to enter two numbers.
- **Processing:**
  - The program compares the two numbers to determine which is greater (maximum) and which is lesser (minimum).
  - It then displays the maximum and minimum values.
  - The program increments counters for maximum and minimum entries each time a comparison is made.
  - The loop continues until the user enters `-1` for either number.
- **Output:**
  - The program displays the maximum and minimum values for each pair of numbers entered.
  - At the end, it displays the total number of maximum and minimum entries.
