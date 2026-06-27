#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks[5];   // 5 subjects
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    s.total = 0;

    // Input marks of 5 subjects
    for(i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = (float)s.total / 5;

    // Display Marksheet
    printf("\n----- Student Marksheet -----\n");
    printf("Name       : %s\n", s.name);
    printf("Roll No.   : %d\n", s.roll);

    for(i = 0; i < 5; i++) {
        printf("Subject %d : %d\n", i+1, s.marks[i]);
    }

    printf("Total Marks: %d\n", s.total);
    printf("Percentage : %.2f\n", s.percentage);

    // Grade system
    if(s.percentage >= 60)
        printf("Result     : First Division\n");
    else if(s.percentage >= 45)
        printf("Result     : Second Division\n");
    else if(s.percentage >= 33)
        printf("Result     : Third Division\n");
    else
        printf("Result     : Fail\n");

    return 0;
}
