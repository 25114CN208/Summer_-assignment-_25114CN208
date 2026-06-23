#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  
    int i, max = 0;
    char result;

    printf("Enter a string: ");
    gets(str);

    
    for(i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
        if(count[(int)str[i]] > max) {
            max = count[(int)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", result);
    printf("It occurs %d times.\n", max);

    return 0;
}
