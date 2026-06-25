#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, tries = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Number Guessing Game!\n");
    printf("1 se 100 ke beech ek number guess karo:\n");

    do {
        scanf("%d", &guess);
        tries++;

        if (guess > number) {
            printf("Bahut bada hai! Chhota number try karo:\n");
        } else if (guess < number) {
            printf("Bahut chhota hai! Bada number try karo:\n");
        } else {
            printf("Wah! Tumne %d tries me sahi guess kiya.\n", tries);
        }
    } while (guess != number);

    return 0;
}
