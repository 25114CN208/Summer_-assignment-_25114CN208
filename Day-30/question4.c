#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

struct Student students[SIZE];
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    while(1) {
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: 
                printf("Exiting program...\n");
                return 0;
            default: 
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function definitions
void addStudent() {
    if(count == SIZE) {
        printf("Record full!\n");
    } else {
        printf("Enter Roll No: ");
        scanf("%d", &students[count].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[count].name);
        printf("Enter Marks: ");
        scanf("%f", &students[count].marks);
        count++;
        printf("Student added successfully!\n");
    }
}

void displayStudents() {
    if(count == 0) {
        printf("No records found!\n");
    } else {
        printf("\nRollNo\tName\tMarks\n");
        for(int i = 0; i < count; i++) {
            printf("%d\t%s\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
        }
    }
}

void searchStudent() {
    int roll, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);
    for(int i = 0; i < count; i++) {
        if(students[i].rollNo == roll) {
            printf("Found: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found!\n");
}

void updateStudent() {
    int roll, found = 0;
    printf("Enter Roll No to update: ");
    scanf("%d", &roll);
    for(int i = 0; i < count; i++) {
        if(students[i].rollNo == roll) {
            printf("Enter new Name: ");
            scanf("%s", students[i].name);
            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);
            printf("Record updated!\n");
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found!\n");
}

void deleteStudent() {
    int roll, found = 0;
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);
    for(int i = 0; i < count; i++) {
        if(students[i].rollNo == roll) {
            for(int j = i; j < count-1; j++) {
                students[j] = students[j+1];
            }
            count--;
            printf("Record deleted!\n");
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found!\n");
}
