#include <stdio.h>
#include <string.h>

// Structure to store book details
struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued; // 0 = available, 1 = issued
};

int main() {
    struct Book library[100]; // Array to store up to 100 books
    int choice, count = 0, i, id;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Book
                printf("Enter Book ID: ");
                scanf("%d", &library[count].id);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", library[count].title);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", library[count].author);
                library[count].isIssued = 0; // Initially available
                count++;
                printf("Book added successfully!\n");
                break;

            case 2: // Display Books
                printf("\nList of Books:\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                           library[i].id,
                           library[i].title,
                           library[i].author,
                           library[i].isIssued ? "Issued" : "Available");
                }
                break;

            case 3: // Issue Book
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        if (library[i].isIssued == 0) {
                            library[i].isIssued = 1;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book already issued!\n");
                        }
                        break;
                    }
                }
                if (i == count) printf("Book not found!\n");
                break;

            case 4: // Return Book
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        if (library[i].isIssued == 1) {
                            library[i].isIssued = 0;
                            printf("Book returned successfully!\n");
                        } else {
                            printf("Book was not issued!\n");
                        }
                        break;
                    }
                }
                if (i == count) printf("Book not found!\n");
                break;

            case 5: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
