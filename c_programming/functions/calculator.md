**Task Instructions:**

1. Inside your "Tasks" directory, create another directory called functions and inside that create a file named "math_operations.c" for this task.

**Problem Statement:**

Building on the concepts of functions, parameters, and pointers, your task is to design a program that performs basic mathematical operations using functions.

**Requirements:**

1. Implement separate functions for addition, subtraction, multiplication, and division. Each function should take two parameters and return the result of the corresponding operation.

2. Create a function named `calculate` that:
   - Takes three parameters: two numbers and a function pointer to one of the basic mathematical operation functions.
   - Calls the specified operation function and returns the result.

3. In the main program:
   - Prompt the user to enter two numbers.
   - Prompt the user to select an operation (addition, subtraction, multiplication, or division).
   - Call the `calculate` function with appropriate parameters, considering user input.
   - Print the result of the calculation.

4. Ensure clear and concise function names and comments to explain the purpose of each function.

5. Enhance your program by allowing the user to perform multiple calculations in a single run. After presenting the result of one calculation, prompt the user if they want to perform another calculation. If yes, repeat the process; if no, exit the program.

**Example Input and Expected Output:**

```plaintext
Enter the first number: 15
Enter the second number: 7

Select an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division

Enter the operation (1-4): 3

Result of multiplication: 105

Perform another calculation? (1 for Yes, 0 for No): 1

Enter the first number: 25
Enter the second number: 5

Select an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division

Enter the operation (1-4): 4

Result of division: 5.000000

Perform another calculation? (1 for Yes, 0 for No): 0
```

**Task Clarification:**

This task aims to evaluate your understanding of functions, parameters, and pointers by creating a program that performs basic mathematical operations dynamically based on user input. Ensure your code is well-commented, providing clear explanations for each function and the overall program structure.