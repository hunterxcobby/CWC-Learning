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

Certainly, my apologies for the oversight. Here's the corrected task with example input and expected output:

**Example Input and Expected Output:**

```plaintext
Enter your guess (1-100): 50
Incorrect! Try higher.
Enter your guess (1-100): 75
Incorrect! Try lower.
Enter your guess (1-100): 62
Congratulations! You guessed the correct number in 3 attempts.
```

**Note:** The actual values and attempts will vary since the target number is randomly generated. This example is for illustrative purposes only.

**Task Clarification:**

This task aims to evaluate your proficiency with `while` loops, `break`, and `continue` statements by creating an interactive number guessing game. Ensure your code is well-commented, providing clear explanations for the loop structure and the use of `break` and `continue` statements.