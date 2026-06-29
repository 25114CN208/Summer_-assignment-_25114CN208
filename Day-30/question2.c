#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book library[SIZE];
    int count = 0;
    int choice, i, id, found;

    while(1) {
        printf("\n=== Library Menu ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Book
                if(count == SIZE) {
                    printf("Library full!\n");
                } else {
                    printf("Enter Book ID: ");
                    scanf("%d", &library[count].id);
                    printf("Enter Title: ");
                    scanf("%s", library[count].title);
                    printf("Enter Author: ");
                    scanf("%s", library[count].author);
                    printf("Enter Price: ");
                    scanf("%f", &library[count].price);
                    count++;
                    printf("Book added successfully!\n");
                }
                break;

            case 2: // Display Books
                if(count == 0) {
                    printf("Library is empty!\n");
                } else {
                    printf("\nID\tTitle\tAuthor\tPrice\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t%s\t%.2f\n",
                               library[i].id,
                               library[i].title,
                               library[i].author,
                               library[i].price);
                    }
                }
                break;

            case 3: // Search Book
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        printf("Found: %s by %s, Price: %.2f\n",
                               library[i].title,
                               library[i].author,
                               library[i].price);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Book not found!\n");
                break;

            case 4: // Update Book
                printf("Enter Book ID to update: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        printf("Enter new Title: ");
                        scanf("%s", library[i].title);
                        printf("Enter new Author: ");
                        scanf("%s", library[i].author);
                        printf("Enter new Price: ");
                        scanf("%f", &library[i].price);
                        printf("Book updated successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Book not found!\n");
                break;

            case 5: // Delete Book
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        for(int j = i; j < count-1; j++) {
                            library[j] = library[j+1];
                        }
                        count--;
                        printf("Book deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Book not found!\n");
                break;

            case 6: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

