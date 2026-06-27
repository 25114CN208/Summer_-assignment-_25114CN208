#include <stdio.h>
#include <string.h>

// Structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[50]; // Array to store up to 50 students
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student records
    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
