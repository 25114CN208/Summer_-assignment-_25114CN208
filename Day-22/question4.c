#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  // input string

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {       // check if character is not space
            result[j] = str[i];   // copy character to result
            j++;
        }
    }
    result[j] = '\0';  // end the new string

    printf("String without spaces: %s\n", result);

    return 0;
}
