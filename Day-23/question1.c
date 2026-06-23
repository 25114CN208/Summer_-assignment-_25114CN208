#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, flag;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        flag = 0;  

        for(j = 0; j < len; j++) {
            if(i != j && str[i] == str[j]) {
                flag = 1;  
                break;
            }
        }

        if(flag == 0) {  
            printf("First non-repeating character: %c\n", str[i]);
            return 0;   
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}

    

    


