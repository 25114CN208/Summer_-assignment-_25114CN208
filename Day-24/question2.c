#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i, count;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;

        // Count same characters in sequence
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", str[i], count);
    }

    return 0;
}
