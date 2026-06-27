#include <stdio.h>
#include <string.h>

// Structure to store employee details
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[50]; // Array to store employees
    int count = 0; // Number of employees
    int choice;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &employees[count].id);
                printf("Enter Employee Name: ");
                scanf("%s", employees[count].name);
                printf("Enter Employee Salary: ");
                scanf("%f", &employees[count].salary);
                count++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\n--- Employee List ---\n");
                for(int i=0; i<count; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n",
                           employees[i].id, employees[i].name, employees[i].salary);
                }
                break;

            case 3: {
                int searchId, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                for(int i=0; i<count; i++) {
                    if(employees[i].id == searchId) {
                        printf("Employee Found: ID: %d, Name: %s, Salary: %.2f\n",
                               employees[i].id, employees[i].name, employees[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Employee not found!\n");
                }
                break;
            }

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
