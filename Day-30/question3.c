#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Employee {
    int id;
    char name[50];
    char dept[50];
    float salary;
};

int main() {
    struct Employee employees[SIZE];
    int count = 0;
    int choice, i, id, found;

    while(1) {
        printf("\n=== Employee Management Menu ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Employee
                if(count == SIZE) {
                    printf("Employee list full!\n");
                } else {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter Department: ");
                    scanf("%s", employees[count].dept);
                    printf("Enter Salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                }
                break;

            case 2: // Display Employees
                if(count == 0) {
                    printf("No employees found!\n");
                } else {
                    printf("\nID\tName\tDepartment\tSalary\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t%s\t%.2f\n",
                               employees[i].id,
                               employees[i].name,
                               employees[i].dept,
                               employees[i].salary);
                    }
                }
                break;

            case 3: // Search Employee
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Found: %s, Dept: %s, Salary: %.2f\n",
                               employees[i].name,
                               employees[i].dept,
                               employees[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Employee not found!\n");
                break;

            case 4: // Update Employee
                printf("Enter Employee ID to update: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Enter new Name: ");
                        scanf("%s", employees[i].name);
                        printf("Enter new Department: ");
                        scanf("%s", employees[i].dept);
                        printf("Enter new Salary: ");
                        scanf("%f", &employees[i].salary);
                        printf("Employee updated successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Employee not found!\n");
                break;

            case 5: // Delete Employee
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        for(int j = i; j < count-1; j++) {
                            employees[j] = employees[j+1];
                        }
                        count--;
                        printf("Employee deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Employee not found!\n");
                break;

            case 6: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
