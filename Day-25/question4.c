#include <stdio.h>
#include <string.h>

int main() {
    char words[10][50];   // Array to store up to 10 words, each up to 49 characters
    int n;                // Number of words
    char temp[50];        // Temporary variable for swapping

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%s", words[i]);   // Read each word
    }

    // Sorting words by length using Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(strlen(words[j]) > strlen(words[j+1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
