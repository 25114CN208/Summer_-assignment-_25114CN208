#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("Welcome to the Quiz!\n");
    printf("Answer the following questions:\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Who is known as the Father of C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n\n");
    }

    // Question 3
    printf("Q3. Which data type is used to store decimal values?\n");
    printf("1. int\n2. float\n3. char\n4. double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2 || choice == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is float/double.\n\n");
    }

    // Final Score
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}
