**Task Instructions:**

1. Within your "Tasks" directory, create a file named "comparison_logical.c" for this task.

**Problem Statement:**

After delving into comparison and logical operators this week, your task is to craft a compelling program that not only showcases the functionality of these operators but also simulates a decision-making scenario.

**Requirements:**

1. Declare and initialize three variables, each representing the age of a person.

2. Implement comparisons to determine the relationship between these ages, considering scenarios such as older, younger, or the same age. Print out meaningful statements based on these comparisons.

3. Utilize logical operators to create more nuanced conditions. For instance, check if two persons are both older than a third person or if at least one person is older than another. Print the results with clear and concise messages.

4. Incorporate user input to capture ages dynamically, making your program adaptable to various scenarios.

5. Include comments in your code to elucidate the logic behind each comparison and logical operation.

**Example Output:**

```c
#include <stdio.h>

int main(void)
{
    /*Declare variables to represent ages*/
    int age1, age2, age3;

    /* Prompt user for age input*/
    printf("Enter age for person 1: ");
    scanf("%d", &age1);

    printf("Enter age for person 2: ");
    scanf("%d", &age2);

    printf("Enter age for person 3: ");
    scanf("%d", &age3);

    /* Perform comparisons and logical operations*/
    if (/* Your logic goes here */) 
    {
        printf("Person 1 is the oldest.\n");
    } 
    else if (/* Your logic goes here */) 
    {
        printf("Person 2 is the oldest.\n");
    } 
    else if (/* Your logic goes here */) 
    {
        printf("Person 3 is the oldest.\n");
    } 
    else 
    {
        printf("There is a tie in ages.\n");
    }

    if (/* Your logic goes here */) 
    {
        printf("At least two persons share the same age.\n");
    } 
    else
    {
        printf("No two persons share the same age.\n");
    }

    return (0);
}
```

**Task Clarification:**

This task aims to elevate the understanding of comparison and logical operators by incorporating them into a more engaging, real-world scenario. Ensure your code includes user input, making it adaptable and interactive. Clearly comment on the rationale behind each comparison and logical operation.