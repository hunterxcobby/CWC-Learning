**Task Instructions:**

1. Inside your "Tasks" directory, create a file named "grading_system.c" for this task.

**Problem Statement:**

Building on the concept of `if-else if-else` statements, your task is to design a program that evaluates a student's exam score and assigns a corresponding grade.

**Requirements:**

1. Declare a variable to store the student's exam score.

2. Implement `if-else if-else` statements to categorize the student's performance based on the following grading scale:
   - Score greater than or equal to 90: "A"
   - Score between 80 and 89: "B"
   - Score between 70 and 79: "C"
   - Score between 60 and 69: "D"
   - Score below 60: "F"

3. Print a clear message indicating the grade assigned to the student.

4. Include comments in your code to explain the conditions and reasoning behind each grade assignment.

5. Enhance your program by incorporating user input for the exam score, making it interactive.

**Example Output:**

```c
#include <stdio.h>

int main(void) 
{
    /* Declare variable for user input*/
    int examScore;

    /* Prompt user for input*/
    printf("Enter the student's exam score: ");
    scanf("%d", &examScore);

    /* Evaluate and assign grade here*/
    ```

**Example Input:**
90

**Expected Output:**
Grade A

**Task Clarification:**

This task aims to assess your understanding of `if-else if-else` statements by applying them to a practical scenario, such as a grading system. Ensure your code is well-commented, providing clear explanations for each grade assignment. Incorporate user input to make your program interactive and adaptable to various exam scores.
