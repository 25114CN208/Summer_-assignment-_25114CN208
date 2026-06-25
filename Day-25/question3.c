#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20];   // 5 names, each up to 19 characters
    char temp[20];
    int i, j;

    // Input names
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Sorting using Bubble Sort logic
    for(i = 0; i < 5-1; i++) {
        for(j = i+1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output sorted names
    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
