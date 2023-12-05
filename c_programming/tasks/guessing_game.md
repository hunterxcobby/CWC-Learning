**Task Instructions:**

1. Inside your "Tasks" directory, create a file named "number_guessing.c" for this task.

**Problem Statement:**

Building on the concepts of `while` loops, `break`, and `continue` statements, your task is to develop a number guessing game.

**Requirements:**

1. Generate a random number between 1 and 100. This will be the target number the user needs to guess.

2. Implement a `while` loop that allows the user to repeatedly guess the number.

3. Within the loop:
   - Prompt the user to enter their guess.
   - Check if the guess is correct. If so, print a congratulatory message and exit the loop.
   - If the guess is incorrect, provide feedback (higher or lower) and allow the user to continue guessing.

4. Utilize the `break` statement to exit the loop when the correct guess is made.

5. Implement the `continue` statement to handle invalid inputs (e.g., non-numeric input) by prompting the user for another guess without penalizing their attempts.

6. Print the number of attempts it took the user to guess the correct number.

7. Include comments in your code to explain the purpose of the loop, `break`, and `continue` statements.

**Example Output:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for random number generation
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int targetNumber = rand() % 100 + 1;

    // Declare variables
    int userGuess;
    int attempts = 0;

    // Implement the number guessing game
    while (1) {
        // Prompt user for guess
        printf("Enter your guess (1-100): ");
        if (scanf("%d", &userGuess) != 1) {
            // Handle invalid input
            printf("Invalid input. Please enter a numeric value.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        // Increment attempts
        attempts++;

        // Check if the guess is correct
        if (userGuess == targetNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else {
            // Provide feedback and allow another guess
            printf("Incorrect! Try %s.\n", userGuess > targetNumber ? "lower" : "higher");
        }
    }

    return 0;
}
```

**Task Clarification:**

This task aims to evaluate your proficiency with `while` loops, `break`, and `continue` statements by creating an interactive number guessing game. Ensure your code is well-commented, providing clear explanations for the loop structure and the use of `break` and `continue` statements.