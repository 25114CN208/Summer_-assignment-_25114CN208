#include <stdio.h>
#include <string.h>

// Structure to store account details
struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    // Step 1: Create account
    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf("%s", account.name);

    account.balance = 0; // Initial balance

    while(1) {
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                account.balance += amount;
                printf("Amount deposited successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= account.balance) {
                    account.balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("Account Number: %d\n", account.accountNumber);
                printf("Account Holder: %s\n", account.name);
                printf("Current Balance: %.2f\n", account.balance);
                break;

            case 4:
                printf("Thank you for using our Bank System!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
