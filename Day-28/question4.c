#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[100]; // maximum 100 contacts
    int count = 0; // number of contacts
    int choice, i;
    char searchName[50];

    while(1) {
        printf("\n--- Contact Management Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", contacts[count].name);
                printf("Enter Phone: ");
                scanf("%s", contacts[count].phone);
                printf("Enter Email: ");
                scanf("%s", contacts[count].email);
                count++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                printf("\n--- All Contacts ---\n");
                for(i = 0; i < count; i++) {
                    printf("%d. %s | %s | %s\n", i+1, contacts[i].name, contacts[i].phone, contacts[i].email);
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("Found: %s | %s | %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                        break;
                    }
                }
                if(i == count) {
                    printf("Contact not found!\n");
                }
                break;

            case 4:
                printf("Enter name to delete: ");
                scanf("%s", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        for(int j = i; j < count-1; j++) {
                            contacts[j] = contacts[j+1];
                        }
                        count--;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }
                if(i == count) {
                    printf("Contact not found!\n");
                }
                break;

            case 5:
                printf("Thank you for using Contact Management System!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
