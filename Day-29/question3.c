#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    while(1) {
        printf("\n=== String Operations Menu ===\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Concatenate Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Length
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2: // Copy
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;

            case 3: // Compare
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4: // Concatenate
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 5: // Reverse
                printf("Enter a string: ");
                scanf("%s", str1);
                int len = strlen(str1);
                for(int i = 0; i < len; i++) {
                    temp[i] = str1[len - i - 1];
                }
                temp[len] = '\0';
                printf("Reversed string = %s\n", temp);
                break;

            case 6: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
