#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    int freq[256] = {0};  

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);


    for (i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]] = 1;
    }

    printf("Common characters: ");
    
    for (j = 0; str2[j] != '\0'; j++) {
        if (freq[(int)str2[j]] == 1) {
            printf("%c ", str2[j]);
            freq[(int)str2[j]] = 0; 
        }
    }

    return 0;
}
