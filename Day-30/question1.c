#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[SIZE];
    int count = 0;
    int choice, i, roll, found;

    while(1) {
        printf("\n=== Student Record Menu ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Student
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
                break;

            case 2: // Display Students
                if(count == 0) {
                    printf("No records found!\n");
                } else {
                    printf("\nRollNo\tName\tMarks\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n",
                               students[i].rollNo,
                               students[i].name,
                               students[i].marks);
                    }
                }
                break;

            case 3: // Search Student
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(students[i].rollNo == roll) {
                        printf("Found: %s, Marks: %.2f\n",
                               students[i].name,
                               students[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Student not found!\n");
                break;

            case 4: // Update Student
                printf("Enter Roll No to update: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < count; i++) {
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
                break;

            case 5: // Delete Student
                printf("Enter Roll No to delete: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < count; i++) {
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
                break;

            case 6: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
