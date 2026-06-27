#include <stdio.h>

// Structure to store employee salary details
struct Employee {
    int id;
    char name[30];
    float basicSalary;
    float hra;   // House Rent Allowance
    float da;    // Dearness Allowance
    float grossSalary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Salary calculation
        emp[i].hra = 0.20 * emp[i].basicSalary;   // 20% of basic
        emp[i].da  = 0.10 * emp[i].basicSalary;   // 10% of basic
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n--- Salary Details ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Gross Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].grossSalary);
    }

    return 0;
}
