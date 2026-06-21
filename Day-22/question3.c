#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;
    
    printf("Enter a string: ");
    gets(str);

    printf("\nCharacter frequencies:\n");

    // Loop for each character
    for(i = 0; str[i] != '\0'; i++) {
        count = 1;

        // Skip already counted characters
        if(str[i] == '0') 
            continue;

        for(j = i+1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '0';  // mark as counted
            }
        }

        printf("'%c' = %d\n", str[i], count);
    }

    return 0;
}
